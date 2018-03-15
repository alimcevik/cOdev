#include <stdio.h>
#include "sayilar.h"

void main(){
	tekcift(5);
	tekcift(120);
	printf("-----\n");

	asalmi(5);
	asalmi(7);
	asalmi(10);
	asalmi(12);
	asalmi(120);
	printf("-----\n");

	enbuyukrakam(-980);
	enbuyukrakam(163);
	printf("-----\n");

	printf("Obeb(12,24)= %d\n", obeb(12,24));
	printf("Obeb(1,67)= %d\n", obeb(1,67));
	printf("Obeb(0,12)= %d\n-----\n", obeb(0,12));

	printf("Okek(12,24)= %d\n", okek(12,24));
	printf("Okek(1,67)= %d\n", okek(1,67));
	printf("Okek(2,12)= %d\n", okek(2,12));
}
