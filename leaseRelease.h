#ifndef LEASERELEASE_H
#define LEASERELEASE 1

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


int __attribute__ ((noinline))
lease(int num, int leaseTime, int * addrArray[]);

int __attribute__ ((noinline))
release(int * addr); 


#ifdef __cplusplus
}
#endif

#endif
