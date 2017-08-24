#pragma once

#include "Interface.hpp"

namespace ZE
{
    Interface IRuntimeModule
    {
public:
    
    virtual ~ IRuntimeModule(){};

    virtual int Initialize() = 0;
    virtual void Finalize() = 0;
    virtual void Trick() = 0;
    };
}
