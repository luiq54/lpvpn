#pragma once
#include<pthread.h>

namespace util {
    class FastMutex {
        pthread_mutex_t crit;
    public:
        FastMutex();
        FastMutex(const FastMutex&) = delete;
        FastMutex(const FastMutex&&) = delete;
        ~FastMutex();

        void lock();
        void unlock();
    };
}
