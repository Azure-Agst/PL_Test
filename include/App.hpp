// only read once
#pragma once

// libraries
#include <pu/Plutonium>

// Common Namespaces
#define UI pu::ui
#define ELM pu::ui::elm
#define COLOR pu::ui::Color

// define our main objects here
class CustomLayout : public UI::Layout {
    public:
        // declare constructor to be defined in App.cpp
        CustomLayout();

        // not sure why we need this but i'll add it.
        // "Have ::Ref alias and ::New() static constructor"
        PU_SMART_CTOR(CustomLayout)
    
    private:

        // define our objects here
        // add ::Ref to the declaration to get pointer to object
        ELM::TextBlock::Ref mainText;
        ELM::Rectangle::Ref footerBkg;
        ELM::TextBlock::Ref footerText;
};

class App : public UI::Application {
    public:
        // set different namespace
        using Application::Application;
        PU_SMART_CTOR(App)

        // we override this function and define it in main to give it functionality
        void OnLoad() override;
    
    private:
        // get layout instance
        CustomLayout::Ref layout;
};