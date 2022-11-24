#include <stdio.h>
#include <stdlib.h>

void input_int(int *var){
	char buffer[512];
	fgets(buffer, sizeof(buffer), stdin);
	while(sscanf(buffer, "%d", var)!=1){
		printf("\nsilahkan masukan kembali : ");
		fgets(buffer,sizeof(buffer), stdin);
	}
}

void biner_desimal(){
	int angka_biner, angka_desimal=0, i=1, digit;
	printf("\tKONVERSI BINER KE DESIMAL\n");
	printf("======================================\n\n");
	printf("Masukan Bilangan Biner : ");
	input_int(&angka_biner);
	while(angka_biner!=0){
		digit=angka_biner%10;
		angka_desimal= angka_desimal+(digit*i);
		i=i*2;
		angka_biner = angka_biner/10;
	}				
	printf("Hasil Konversi Bilangan Desimal :%d\n", angka_desimal);
}

void desimal_biner(){
	int a[10], n, f;
	printf("\tKONVERSI DESIMAL KE BINER\n");
	printf("======================================\n\n");
	printf("Masukan Bilangan Desimal: ");
	input_int(&n);
	for(f=0; n>0; f++){
		a[f] = n%2;
		n = n/2;
	}
	printf("Hasil Konversi Bilangan Biner:");
	for(f=f-1 ;f>=0 ;f--) {
		printf("%d",a[f]);
	}
}

int main(){
	int menu;
	int pilihan;
	
	do {
		system ("cls");
		printf ("======================================\n");
		printf ("|       MENU KONVERSI BILANGAN       |\n");
		printf ("======================================\n\n");
		printf("1. Konversi Bilangan Biner ke Desimal\n2. Konversi Bilangan Desimal ke Biner\n\n");
		printf ("======================================\n");
		printf("Pilihan Menu Konversi Anda [1] atau [2] : ");
		input_int(&pilihan);
		printf ("======================================\n\n");
	
		switch(pilihan){
			case 1:
				biner_desimal();
				printf("======================================\n");
				printf("\nApakah anda ingin mengulang?(y/t)\n");
			    printf("Pilihan saya : ");
			    scanf(" %c", &menu);
				break;
			case 2:
				desimal_biner();
				printf("\n======================================\n");
				printf("\nApakah anda ingin mengulang?(y/t)\n");
			    printf("Pilihan saya : ");
			    scanf(" %c", &menu);
				break;
		}
		
	}while (menu == 'y');
	printf ("Terima Kasih.....");
	return 0;
}
