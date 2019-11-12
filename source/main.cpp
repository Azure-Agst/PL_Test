#include <App.hpp>

/*
 * This is where we'd define userAppInit/userAppExit 
 * if we needed to do app initialization/finalization.
 *
 * extern "C" void userAppInit(){};
 * extern "C" void userAppExit(){};
 */

// Main entrypoint
int main() {
    // init a renderer for our app
    auto renderer = pu::ui::render::Renderer::New(SDL_INIT_EVERYTHING, pu::ui::render::RendererInitOptions::RendererNoSound, pu::ui::render::RendererHardwareFlags);

    // create our main app, using our renderer
    auto app = App::New(renderer);

    // prepare the app. MUST BE CALLED FIRST!
    app->Prepare(); 

    // start the app with a fade in animation
    // this creates a loop that halts main(), till `app->Close();` is called.
    app->ShowWithFadeIn();

    // exit app
    return 0;
}