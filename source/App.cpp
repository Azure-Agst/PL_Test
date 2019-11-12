#include <App.hpp>

CustomLayout::CustomLayout() : Layout::Layout() {
    // create TextBlock declared in header
    this->helloText = pu::ui::elm::TextBlock::New(300, 300, "Hello World!");

    // add defined objects to layout
    this->Add(this->helloText);
}

// define our onload for the app here
void App::OnLoad() {
    // create an instance of our layout for the app and load
    this->layout = CustomLayout::New();
    this->LoadLayout(this->layout);

    //define main interaction function as a lambda function
    this->SetOnInput([&](u64 Down, u64 Up, u64 Held, pu::ui::Touch pos){

        // close app on + press
        if(Down & KEY_PLUS){
            this->Close();
        }
    });
}