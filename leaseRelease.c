#ifdef __cplusplus
extern "C" {
#endif

/////////////////////////////////////////////
// HTM Intrinsics
/////////////////////////////////////////////
int __attribute__ ((noinline))
lease(int num, int leaseTime, int * addrArray[]) {
	//:::"memory" prevents memory reordering
	//0b 111000 0000000000000000000000010
	//op of 1e
    __asm__ __volatile__ (".word 0xbc000000":::"memory");
}

int __attribute__ ((noinline))
release(int * addr) {
    __asm__ __volatile__ (".word 0xbc000001":::"memory");
}




#ifdef __cplusplus
}
#endif
