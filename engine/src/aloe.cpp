#include "aloe.h"

int main(int argc, char** argv)
{
    aloe::Application* app = aloe::getApplication();
    app->run();
    delete(app);
}
