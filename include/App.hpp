// only read once
#pragma once

// libraries
#include <pu/Plutonium>

// define our main objects here
class CustomLayout : public pu::ui::Layout {
    public:
        // declare constructor to be defined in App.cpp
        CustomLayout();

        // not sure why we need this but i'll add it.
        // "Have ::Ref alias and ::New() static constructor"
        PU_SMART_CTOR(CustomLayout)
    
    private:

        // define our objects here
        // add ::Ref to the declaration to get pointer to object
        pu::ui::elm::TextBlock::Ref helloText;
};

class App : public pu::ui::Application {
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