#include <stdio.h>
#include "sayilar.h"

int tekcift(int x){
	if(x % 2 == 1){
		printf("%d Sayisi tektir\n", x);
		return 1;
	}		
	else{
		printf("%d sayisi cifttir\n", x);
		return 0;
	}
}


int asalmi(int z){
	int kontrol = 0;
	for (int i = 2; i < z; i++){
		if(z % i == 0){
			kontrol++;
	//FIX ME Her şey yolunda mı? 
	//printf("kontrol=%d i=%d z=%d \n",kontrol, i,z);
		}
	}

	if(kontrol <= 1){
		printf("%d sayisi asaldir\n", z);	
	return 1;
	}
	else
		printf("%d sayisi asal degildir\n", z);
	return 0;
}


int enbuyukrakam(int y){
	printf("%d sayisinin en buyuk rakami= ", y);
	
	int enbuyuk = 0; 
	if (y < 0){
		y = (-1) * y;
	}
 	while (y > 0){
		int kalan = y % 10;
		y /= 10;
		if(kalan > enbuyuk){
			enbuyuk = kalan;
		}
//	FIXME else gerek yok 
//	enbuyuk = enbuyuk; olarak geri donuyor
	}
	printf("%d\n", enbuyuk);	
}


int obeb(int a, int b){
	if (a < 0 || b < 0 )
		return -1;
	if(a==0)
		return b;
	else if(b==0)
		return a;

	if (a == b)
		return a;

	if(a > b)
		return obeb(a-b,b);
	else
		return obeb(a,b-a);
}


int okek(int a, int b){
	//obeb(a,b) * okek(a,b) = a*b
	return (a * b) / obeb(a,b);
}
