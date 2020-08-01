#pragma once

#include "core.h"

namespace aloe
{
    enum EventType
    {
        MousePressed, MouseMoved, MouseReleased, MouseScrolled,
        KeyPressed, KeyReleased,
        WindowClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved
    };

    enum EventCategory
    {
        Window = BIT(1),
        Input = BIT(2),
        Keyboard = BIT(3),
        Mouse = BIT(4)
    };

#define EVENT_CLASS_TYPE(type) static EventType getStaticType() { return EventType::##type; }\
                               virtual EventType getType() override const { return getStaticType(); }\
                               virtual const char* getName() override const { return #type; }

#define EVENT_CLASS_CATEGORY(category) virtual int getCategories() { return category; }

    class Event
    {
    public:
        virtual EventType getType() = 0;
        virtual int getCategories() = 0;
        virtual char* getName() = 0;
    };
}
