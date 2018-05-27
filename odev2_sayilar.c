#include <stdio.h>

int tekcift(int x){
  if(x % 2 == 1){
    printf("%d Sayisi tektir\n", x);
    return 1;
  }		
  else {
    printf("%d sayisi cifttir\n", x);
    return 0;
  }
}


int asalmi(int z){
  int kontrol = 0;
  for (int i = 2; i <= z/2; i++){
    if(z % i==0){
      kontrol++;
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
  int enbuyuk = 0; 
  printf("%d sayisinin en buyuk rakami=",y);
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

void main(){
  tekcift(5);
  tekcift(120);
  printf("-----\n");

  asalmi(5);
  asalmi(120);
  printf("-----\n");
	
  enbuyukrakam(980);
  enbuyukrakam(163);
  printf("-----\n");

  printf("Obeb(12,24)= %d\n", obeb(12,24));
  printf("Obeb(1,67)= %d\n", obeb(1,67));
  printf("Obeb(0,12)= %d\n-----\n", obeb(0,12));

  printf("Okek(12,24)= %d\n", okek(12,24));
  printf("Okek(1,67)= %d\n", okek(1,67));
  printf("Okek(2,12)= %d\n", okek(2,12));
}
