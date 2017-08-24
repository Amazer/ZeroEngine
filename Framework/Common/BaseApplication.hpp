#pragma once

#include "IApplication.hpp"

namespace ZE
{
    class BaseApplication : implements IApplication
    {
        public:
            virtual int Initialize();
            virtual void Finalize();

            virtual void Trick();

            virtual bool IsQuit();

        protected:
            // Flag if need quit the main loop of the application
            bool m_bQuit;
    };
}
