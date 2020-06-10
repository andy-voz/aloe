#include "app.h"

void aloe::Application::run()
{
    while (true)
    {
        update();
        draw();
    }
}
