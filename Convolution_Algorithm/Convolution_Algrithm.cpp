#include <stdio.h>
#include <stdlib.h>

int main(){
	int satir,sutun,fkenar;
	int satir_,sutun_,toplam;
	int filtreToplam;
	//Matrisleri alma
	printf("Verileri iceren matris:	\n");
	printf("Girmek istediginiz matrisin satir sayisi: ");
	scanf("%d",&satir);
	printf("Girmek istediginiz matrisin sutun sayisi: ");
	scanf("%d",&sutun);
	printf("Matrisin elemanlarini giriniz: \n");
	int matrix[satir][sutun];
	for (int i=0;i<satir;i++){
		for(int j=0;j<sutun;j++){
			printf("%d. sutun, %d.satir: ", i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Filtre matrisi:	\n");
	printf("Filtre matrisinin satir ve sutun sayisi: ");
	scanf("%d",&fkenar);
	int filtre[fkenar][fkenar];
	for (int i=0;i<fkenar;i++){
		for(int j=0;j<fkenar;j++){
			printf("%d. sutun, %d.satir: ", i+1,j+1);
			scanf("%d",&filtre[i][j]);
			filtreToplam = filtreToplam+filtre[i][j];
		}
	}
	sutun_ = sutun - fkenar +1;
	satir_ = satir - fkenar +1;
	int smatrix[satir_][sutun_];
	//Konvolüsyon işlemi
	for(int i = 0; i < satir_;i++){
		printf("i ye girdi\n");
		for(int j = 0; j < sutun_;j++){
			printf("j ye girdi\n");
			toplam = 0;
			for(int p = 0; p < fkenar;p++){
				printf("p ye girdi\n");
				for(int t=0; t < fkenar;t++){
					printf("t ye girdi\n");
					toplam =  toplam + matrix[p+i][t+j]*filtre[p][t];
					printf("toplam = matrix(%d,%d) * filtre(%d,%d) \n",p+j,t+i,p,t);
					printf("toplam = %d \n",toplam);
				}
			}
			printf("toplami yazdi (%d,%d) %d \n",i,j, toplam);
			smatrix[i][j] = toplam/filtreToplam;
		}
	}
	//Matrisleri yazdırma
	printf("\n");
	for (int i=0;i<satir_;i++){ // Sonuc matrisi
		for(int j=0;j<sutun_;j++){
			printf("%d ",smatrix[i][j]);			
		}
		printf("\n");
	}
	printf("\n");
	for (int i=0;i<satir;i++){	// Girilen matris
		for(int j=0;j<sutun;j++){
			printf("%d ",matrix[i][j]);			
		}
		printf("\n");
	}
	printf("\n");
	for (int i=0;i<fkenar;i++){	// Filtre
		for(int j=0;j<fkenar;j++){
			printf("%d ",filtre[i][j]);			
		}
		printf("\n");
	}
	return 0;
}
