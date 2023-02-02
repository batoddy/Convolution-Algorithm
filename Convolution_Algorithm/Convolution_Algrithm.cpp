#include <stdio.h>
#include <stdlib.h>

int main(){
	int satir,sutun,fkenar;
	int satir_,sutun_,toplam;
	int matrix[satir][sutun];
	int filtre[fkenar][fkenar];
	int smatrix[satir_][sutun_];
	//Matrisleri alma
	printf("Verileri iceren matris:	\n");
	printf("Girmek istediginiz matrisin satir sayisi: ");
	scanf("%d",&satir);
	printf("Girmek istediginiz matrisin sutun sayisi: ");
	scanf("%d",&sutun);
	printf("Matrisin elemanlarini giriniz: ");
	for (int i=0;i<sutun;i++){
		for(int j=0;j<satir;j++){
			printf("%d. sutun, %d.satir: ", i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
			
	printf("Filtre matrisi:	\n");
	printf("Filtre matrisinin satir ve sutun sayisi: ");
	scanf("%d",&fkenar);
	for (int i=0;i<fkenar;i++){
		for(int j=0;j<fkenar;j++){
			printf("%d. sutun, %d.satir: ", i,j);
			scanf("%d",&filtre[i][j]);
		}
	}
	sutun_ = sutun - fkenar +1;
	satir_ = satir - fkenar +1;
	//Konvülasyon iþlemi
	for(int i = 0; i < satir_;i++){
		for(int j = 0; j < sutun_;j++){
			smatrix[i][j] = toplam;
			for(int p = 0; p < fkenar;p++){
				for(int t; t < fkenar;t++){
					 toplam =  toplam + matrix[p+i][t+j]*filtre[p][t];
				}
			}
		}
	}
	
	//Sonuc Matrisini yazdýrma:
	
	for (int i=0;i<sutun_;i++){
		for(int j=0;j<satir_;j++){
			printf("%d ",smatrix[i][j]);			
		}
		printf("\n");
	}	
		
	return 0;
}
	

