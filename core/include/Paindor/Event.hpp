#ifndef __PAINDOR_EVENT_HPP__
#define __PAINDOR_EVENT_HPP__

namespace Paindor {
    class Event {
        
    };

    class ApplicationEvent : public Event {

    };

    class WindowResizeEvent : public ApplicationEvent {
    public:
        WindowResizeEvent(int width, int height);
    };

    class WindowCloseEvent : public ApplicationEvent {

    };

    class InputEvent : public Event {

    };

    class KeyEvent : public InputEvent {
    protected:
        explicit KeyEvent(int keyCode);
    public:
        int getKeyCode();
    };

    class KeyPressedEvent : public KeyEvent {
    public:
        KeyPressedEvent(int keyCode, int repeatCount) : KeyEvent(keyCode);
    };

    class KeyReleasedEvent : public KeyEvent {
    public:
        explicit KeyReleasedEvent(int keyCode) : KeyEvent(keyCode);
    };

    class MouseEvent : public InputEvent {

    };

    class MouseButtonEvent : public MouseEvent {
    protected:
        explicit MouseButtonEvent(int buttonCode);
    public:
        int getButtonCode();
    };

    class MouseButtonPressedEvent : public MouseButtonEvent {
    public:
        MouseButtonPressedEvent(int buttonCode, int repeatCount) : MouseButtonEvent(buttonCode);
    };

    class MouseButtonReleasedEvent : public MouseButtonEvent {
    public:
        explicit ouseButtonReleasedEvent(int buttonCode) : MouseButtonEvent(buttonCode);
    };

    class MouseMoveEvent : public MouseEvent {
    public:
        MouseMoveEvent(int x, int y);
        int getX();
        int getY();
    };

    class MouseScrollEvent : public MouseEvent {
    public:
        MouseScrollEvent(int xOffset, int yOffset);
        int getXOffset();
        int getYOffset();
    };


    class EventDispatcher {
    public:
        explicit EventDispatcher(std::unique<Event> event);

        template<typename T>
        bool dispatch(std::function<bool(std::shared<T>) func);
    };

}

#endif
