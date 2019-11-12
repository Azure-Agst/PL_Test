#include <App.hpp>

CustomLayout::CustomLayout() : Layout::Layout() {
    // create TextBlock declared in header
    this->mainText = ELM::TextBlock::New(25, 25, "Hello World!");
    this->footerBkg = ELM::Rectangle::New(0, 620, 1280, 100, COLOR(0x40, 0x40, 0x40, 0xff));
    this->footerText = ELM::TextBlock::New(25, 660, "[+] Return Home");
    this->footerText->SetColor(COLOR(0x80, 0x80, 0x80, 0xff));
    
    // add defined objects to layout
    this->Add(this->mainText);
    this->Add(this->footerBkg);
    this->Add(this->footerText);
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