#ifndef __PAINDOR_APPLICATION_HPP__
#define __PAINDOR_APPLICATION_HPP__

namespace Paindor {

    class Application {
    public:
        Application();
        void run(); 

        Application(const Application&) = delete;
        Application& operator=(const Application&) = delete;
        Application(Application&&) = delete;
        Application& operator=(Application&&) = delete;
    };

}

#endif
