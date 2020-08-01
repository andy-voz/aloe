#include "app.h"

namespace aloe
{
    void Application::run()
    {
        while (true)
        {
            update();
            draw();
        }
    }
}
