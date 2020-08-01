#include "aloe.h"
#include "log.h"

int main(int argc, char** argv)
{
    aloe::Log::init();
    LOG_CORE_INFO("Initialized Logger");
    LOG_INFO("Initialized Logger");

    aloe::Application* app = aloe::getApplication();
    app->run();
    delete(app);
}
