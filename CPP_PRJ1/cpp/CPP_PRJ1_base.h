#ifndef CPP_PRJ1_BASE_IMPL_BASE_H
#define CPP_PRJ1_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Component.h>
#include <ossie/ThreadedComponent.h>


class CPP_PRJ1_base : public Component, protected ThreadedComponent
{
    public:
        CPP_PRJ1_base(const char *uuid, const char *label);
        ~CPP_PRJ1_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:

    private:
};
#endif // CPP_PRJ1_BASE_IMPL_BASE_H
