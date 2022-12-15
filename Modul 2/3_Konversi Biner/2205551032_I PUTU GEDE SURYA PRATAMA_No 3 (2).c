#include <stdio.h>

void validasi_integer(char *cek, int *tujuan){
	while(!(sscanf(cek, "%d", tujuan)==1)){
		printf("Input salah\n");
		printf("Silahkan masukkan inputan yang benar: ");
		fgets(cek, 9, stdin);
	}
}

void dec_biner(int decimal){
	float biner[50];
	int i=0;
	while(decimal!=0){
		biner[i] = decimal%2;
		i++;
		decimal = decimal/2;
	}
	printf("\nAngka Binner = ");
	for(i=(i-1); i>=0; i--)
	printf("%.0f", biner[i]);
	getch();
}

void biner_dec(int biner){
	int decimal=0;
	int bobot=1;
	int tampungan;
	while(biner!=0){
		tampungan=biner%10;
		decimal=decimal+tampungan*bobot;
		biner=biner/10;
		bobot=bobot*2;
	}
	printf("\nAngka Desimal = %d", decimal);
}

int main(){
	char cek[10];
	int pil1, pil2;
	int des, bin;
	do{
		printf("=================================================\n");
		printf("|  PROGRAM KONVERSI BILANGAN DESIMAL DAN BINER  |\n");
		printf("=================================================\n");
		printf("\nPilihan menu: \n\n");
		printf("[1] Desimal ke Biner\n");
		printf("[2] Biner ke Desimal\n\n");
		printf("Masukkan pilihan anda: ");
		fgets(cek, 9, stdin);
		validasi_integer(cek, &pil2);
		system("cls");
		
		if(pil2==1){
			printf("===== KONVERSI BILANGAN DESIMAL KE BINER =====\n");
			printf("=================================================\n");
			printf("Masukkan bilangan desimal: ");
			fgets(cek, 9, stdin);
			validasi_integer(cek, &des);
			dec_biner(des);
		}else if(pil2==2){
			printf("===== KONVERSI BILANGAN BINER KE DESIMAL =====\n");
			printf("=================================================\n");
			printf("Masukkan bilangan biner: ");
			fgets(cek, 9, stdin);
			validasi_integer(cek, &bin);
			biner_dec(bin);
		}else{
			printf("Tidak ada di pilihan!!");
		}
		printf("\n\nApakah ingin mengulang program?\n");
		printf("[1] Mengulang program\n");
		printf("[2] Keluar dari program\n\n");
		printf("Masukkan pilihan 1 atau pilihan 2 : ");
		fgets(cek, 9, stdin);
		validasi_integer(cek, &pil1);
		system("cls");	
	}while(pil1==1);
	return 0;
}
