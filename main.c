#include "leaseRelease.h"
#include <stdio.h>

int main(){
	int a;
	int b;
	printf("hello sescn");	
	int * leaseAddrArray[3];
	leaseAddrArray[0] = &a;
	leaseAddrArray[1] = &b;
	lease(2, 20, leaseAddrArray);
	a = 0;
	a = a + 1;
	release(&a);
	return 0;
}

