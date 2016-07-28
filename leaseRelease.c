#include "leaseRelease.h"

#ifdef __cplusplus
extern "C" {
#endif

/////////////////////////////////////////////
// Lease/Release Intrinsics
/////////////////////////////////////////////
int __attribute__ ((noinline))
lease(int num, int leaseTime, int * addrArray[]) {
	//:::"memory" prevents memory reordering
	//0b 101111 00000000000000000000000000
	//op of 2F
	// funt 0
    __asm__ __volatile__ (".word 0xbc000000":::"memory");
}

int __attribute__ ((noinline))
release(int * addr) {
	//0b 101111 00000000000000000000000001
	//op of 2F
	//funct 1
    __asm__ __volatile__ (".word 0xbc000001":::"memory");
}

#ifdef __cplusplus
}
#endif
