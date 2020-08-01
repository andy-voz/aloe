#include "aloe.h"
#include "demo.h"

void DemoApp::draw()
{
}

void DemoApp::update()
{
}

aloe::Application* aloe::getApplication()
{
    return new DemoApp();
}
