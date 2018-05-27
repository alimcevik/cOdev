#include <stdio.h>
#include <math.h>

int a[3][3], b[3][3];

double alan( double arr1[][2],int n){
	double hesap, alan_mutlak;
	for(int i = 0; i < n-1; i++){
		hesap += (arr1[i][0] + arr1[i+1][0]) * (arr1[i+1][1] - arr1[i][1]); 
	}
	hesap = hesap / 2;
	alan_mutlak = fabs(hesap); 
	return alan_mutlak;
}

int diziOlustur(int p_array[], int size){
	int sayi;
		for (int i = 0; i < size; i++){
			printf("%d. sayiyi girin:", i+1);
			scanf("%d", &sayi);
			p_array[i] = sayi;
	}	
	return p_array[size];
}

double ortalama(int p_array[], int size){
	double toplam = 0;
	for(int i = 0; i < size; i++){
		toplam += p_array[i];
	}
	double ort = toplam/size;
	return ort;
}

double standartSapma(int p_array[], int size){
	double sonuc, top = 0;
	double kok;
	for (int i = 0; i < size; i++){
		top += pow((p_array[i] - ortalama(p_array, size)), 2); //veya * (p_array[i] - ortalama(p_array, size))
 	}	
 	sonuc = top/size;
 	kok = sqrt(sonuc);
 	//sonuc = pow ((top/size), 0.5);
 	return kok; 
}

int matrisOlustur(int dizi[3][3]){
	int x;
	for(int i = 0; i < 3 ;i++){
		for(int j = 0; j < 3 ;j++){
			printf("Matrisin %d. satir %d. sutun elemanini girin: ", i+1,j+1);
			scanf("%d", &x);
			dizi[i][j] = x;
		}
	}
	return dizi[3][3];
}

void MatrisCarpim(int mDiziSonuc[3][3]){
	//int a[3][3], b[3][3];
	for (int i = 0; i < 3; i++){
		for(int k = 0; k < 3; k++){
			mDiziSonuc[i][k] = 0;
			for(int j = 0; j < 3; j++){
				mDiziSonuc[i][k] += a[i][j] * b[j][k];
				
			}
		}
	}	

}

void matrisYazdir(int x[3][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%5d ", x[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int mDiziSonuc[3][3]; 
	int a[3][3], b[3][3];
	double arr1[][2] = {{4, 0}, {4, 7.5}, {7, 7.5}, {7, 3}, {9, 0},{7, 0},{4, 0}};
	printf("Seklin Alani= %lf\n", alan(arr1, 7));

	int size, n, dizi[size];	
	printf("Kac elamanin ortalamasini alacaksiniz: ");
	scanf("%d", &size);
	
	int p_array[size];
	diziOlustur(dizi, size);
	
	/*for (int i =0; i<10; i++){
		printf("%d\n", dizi[i]);
	}
	*/
	standartSapma(dizi, size);
	printf("Ortalama sonucu= %f\n", ortalama(dizi, size));
	printf("Standart sapma sonucu= %f\n", standartSapma(dizi,size));

	printf("A matrisi\n");
	matrisOlustur(a);

	printf("B matrisi\n");
	matrisOlustur(b);

	MatrisCarpim(mDiziSonuc);
	printf("Sonuc: \n");

	matrisYazdir(mDiziSonuc);

	return 0;
}
