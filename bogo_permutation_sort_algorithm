#include <stdio.h>
#include <stdbool.h>
#include <Math.h>

void diziOlustur(int *dizi, int n){
  for(int i=0; i<n; i++){
    printf("%d.elemani girin: ",i+1);
    scanf("%d",&dizi[i]);
  }
}

void diziYazdir(int *dizi, int n){
  for(int i=0; i<n; i++){
    printf("%d ",dizi[i]);
  }
  printf("\n");
}

bool siralimi(int *dizi, int n){
  for(int i=n-1; i >= 1;i--){
    if(dizi[i] < dizi[i-1]){
      return false;  
    }
  }
  return true;
}

void karistir(int *dizi, int n){
  int t,r;
  for(int i=0; i < n; i++){
    t = dizi[i];
    r = rand()% n;
    dizi[i] = dizi[r];
    dizi[r] = t;
  }
}

void bogosort(int *dizi, int n){
  while(!siralimi(dizi,n)){
    karistir(dizi,n);
    diziYazdir(dizi,n);
  }
}

int main(){
  int sayilar, adet, boyut;
  printf("Permutation Sort\n");
  printf("----Dizinin boyutunu girin: ");
  scanf("%d",&boyut);
  
  //FIXME -5 tane sayı olamaz mantık hatası
  int boyut_mutlak = fabs(boyut);
  int *dizi = (int*)malloc(sizeof(int) * boyut_mutlak);
  
  diziOlustur(dizi, boyut_mutlak);
  bogosort(dizi, boyut_mutlak);
  printf("\n>> Siralanmis Hali: ");
  diziYazdir(dizi, boyut_mutlak);		
}
