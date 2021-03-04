#include <iostream>
#include "ossie/ossieSupport.h"

#include "CPP_PRJ1.h"
int main(int argc, char* argv[])
{
    CPP_PRJ1_i* CPP_PRJ1_servant;
    Component::start_component(CPP_PRJ1_servant, argc, argv);
    return 0;
}

