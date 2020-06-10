#include "aloe.h"
#include "demo.h"
#include <iostream>

void DemoApp::draw()
{
    std::cout << "Welcome to Aloe!" << std::endl;
}

void DemoApp::update()
{
}

aloe::Application* aloe::getApplication()
{
    return new DemoApp();
}
