#include "mutex.h"
namespace util {
	FastMutex::FastMutex()
	{
        pthread_mutex_init(&crit, NULL);
	}
	FastMutex::~FastMutex()
	{
        pthread_mutex_destroy(&crit);
	}
	void FastMutex::lock()
	{
		pthread_mutex_lock(&crit);
	}
	void FastMutex::unlock()
	{
		pthread_mutex_unlock(&crit);
	}
}
