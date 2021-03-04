#ifndef CPP_PRJ1_I_IMPL_H
#define CPP_PRJ1_I_IMPL_H

#include "CPP_PRJ1_base.h"

class CPP_PRJ1_i : public CPP_PRJ1_base
{
    ENABLE_LOGGING
    public:
        CPP_PRJ1_i(const char *uuid, const char *label);
        ~CPP_PRJ1_i();

        void constructor();

        int serviceFunction();

    protected:
};

#endif // CPP_PRJ1_I_IMPL_H
