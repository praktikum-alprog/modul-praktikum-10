#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
void perkalian_matriks();
void penjumlahan_matriks();
void transpose_matriks();
void validasi();
int main(){
	int pilihan;
	char menu;
	do{
		system("cls");
	    printf("===========================================================\n");
		printf("|                       PROGRAM MATRIKS                   |\n");
		printf("===========================================================\n");
		printf("|              Pilihan :                                  |\n");
		printf("|                  1. Perkalian Matriks                   |\n");
		printf("|                  2. Penjumlahan Matriks                 |\n");
		printf("|                  3. Transpose Matriks                   |\n");
		printf(" ==========================================================\n");
		printf("Masukkan Pilihan (1-3) : ");
		validasi(&pilihan);	
		if(!pilihan || pilihan<1 && pilihan>4){
			system("pause");
		}
		fflush(stdin);
		system("cls");
		switch(pilihan){
			case 1:
			    printf("===========================================================\n");
				printf("|                       PERKALIAN MATRIKS                  |\n");
				printf("===========================================================\n");
				perkalian_matriks();
				break;
			case 2:
				printf("===========================================================\n");
				printf("|                       PENJUMLAHAN MATRIKS                 |\n");
				printf("===========================================================\n");
				penjumlahan_matriks();
				break;
			case 3:
				printf("===========================================================\n");
				printf("|                       TRANSPOSE MATRIKS                  |\n");
				printf("===========================================================\n");
				transpose_matriks();
				break;
				}
		printf("\nIngin Mengulang Program? (y/t) : ");
    	scanf(" %s", &menu);
    	getchar();
	}while(menu=='y');
	return 0;
}
void validasi(int *var){
	char buffer[512];
	fgets(buffer, sizeof(buffer), stdin);
	while(sscanf(buffer, "%d", var) !=1){
		printf("\nInput hanya berupa angka\n");
		printf("Silahkan input kembali : ");
		fgets(buffer, sizeof(buffer), stdin);
	}
}
void perkalian_matriks(){
	void validasi();
	int i, j, m, k, jumlah=0, matriks1[10][10], matriks2[10][10], hasil[10][10];
  	printf("Masukkan jumlah baris dan kolom matriks: ");
  	validasi(&m);
  	printf("Masukkan elemen matrix pertama : \n");
	for (i = 0; i < m; i++){
		for (j = 0; j < m; j++){
	      validasi(&matriks1[i][j]);
	    }
	}
	printf("Masukkan elemen matrix kedua: \n");
	for (i = 0; i < m; i++){
		for (j = 0; j < m; j++){
			validasi(&matriks2[i][j]);
	    }
	  }
	for(i = 0; i < m; i++){
            for(j = 0; j < m; j++){
                for(k = 0; k < m; k++){
                    jumlah = jumlah + (matriks1[i][k] * matriks2[k][j]);
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }
        printf("\nHasil perkalian matriks: \n");
        for(i = 0; i < m; i++){
            for(j = 0; j < m; j++){
                printf("%d\t", hasil[i][j]);
            }
            printf("\n");
        }
    }
void penjumlahan_matriks(){
	void validasi();
	int i, j, m, matriks1[10][10], matriks2[10][10], hasil[10][10];
  	printf("Masukkan jumlah baris dan kolom matriks: ");
  	validasi(&m);
  	printf("Masukkan elemen matrix pertama : \n");
	for (i = 0; i < m; i++){
		for (j = 0; j < m; j++){
	      validasi(&matriks1[i][j]);
	    }
	}
	printf("Masukkan elemen matrix kedua: \n");
	for (i = 0; i < m; i++){
		for (j = 0; j < m; j++){
			validasi(&matriks2[i][j]);
	    }
	  }
	printf("hasil penjumlahan matrix: \n");
	for (i = 0; i < m; i++){
		for (j = 0; j < m; j++){
			hasil[i][j] = matriks1[i][j] + matriks2[i][j];
			printf("%d \t", hasil[i][j]);
	    }
	    printf("\n");
	  }
}
void transpose_matriks(){
	void validasi();
	int matriks[10][10];
    int transpose[10][10];
    int i, j, b, k;
    printf("Masukkan jumlah baris matriks: ");
    validasi(&b);
    printf("Masukkan jumlah kolom matriks: ");
    validasi(&k);

 	printf("Masukkan elemen matrix : \n");
	for (i = 0; i < b; i++){
		for (j = 0; j < k; j++){
			validasi(&matriks[i][j]);
	    }
	}
		
	for (i = 0; i < b; i++){
	    for(j = 0; j < k; j++){
	        transpose[j][i] = matriks[i][j];
	    }
	}
	printf("\nHasil transpose matriks:\n");
	for (i = 0; i < k; i ++){
	    for(j = 0; j < b; j++){
	        printf("%d\t",transpose[i][j]);
		}
	    printf("\n");
	}
}
