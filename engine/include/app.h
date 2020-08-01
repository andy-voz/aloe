#pragma once

namespace aloe
{
    class Application
    {
    public:
        virtual void draw() = 0;
        virtual void update() = 0;

        void run();
    };

    Application* getApplication();
}

