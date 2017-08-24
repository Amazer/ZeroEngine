#pragma once

#include "Interface.hpp"
#include "IRuntimeModule.cpp"

namespace ZE
{
    Interface IApplication : implements IRuntimeModule
    {
        public:
            virtual int Initialize() = 0;
            virtual void Finalize() = 0;

            //once cycle of the main loop
            virtual void Trick() = 0;
            
            virtual bool IsQuit() = 0;
                 
    };
}
