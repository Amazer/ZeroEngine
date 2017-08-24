#include "BaseApplication.hpp"

//Parse command line,read configuration,initialize all sub modules
int ZE::BaseApplication::Initialize()
{
    m_bQuit = false;
    
    return 0;
}

// Finalize all sub modules and clean up all runtime temporary files
void ZE::BaseApplication::Finalize()
{
}

// One cycle of the main loop
void ZE::BaseApplication::Trick()
{
}

bool ZE::BaseApplication::IsQuit()
{
    return m_bQuit;
}
