#include <stdio.h>
#include <stdlib.h>

int main(void){
	int angka_biner, angka_desimal=0, i=1, digit;
	int pilihan;
	int a[10], n, f;
	char menu;
	do {
		system ("cls");
		printf ("======================================\n");
		printf ("|       MENU KONVERSI BILANGAN       |\n");
		printf ("======================================\n\n");
		printf("1. Konversi Bilangan Biner ke Desimal\n2. Konversi Bilangan Desimal ke Biner\n\n");
		printf ("======================================\n");
		printf("Pilihan Menu Konversi Anda : ");
		scanf(" %d", &pilihan);
		printf ("======================================\n\n");
		do {
			switch(pilihan){
				case 1:
					system ("cls");
					printf("\tKONVERSI BINER KE DESIMAL\n");
					printf("======================================\n\n");
					printf("Masukan Bilangan Biner : ");
					scanf("%d", &angka_biner);
					while(angka_biner!=0){
						digit=angka_biner%10;
						angka_desimal= angka_desimal+(digit*i);
						i=i*2;
						angka_biner = angka_biner/10;
					}
					printf("Hasil Konversi Bilangan Desimal :%d\n", angka_desimal);
					printf("======================================\n");
					printf("\nApakah anda ingin mengulang?(y/t)\n");
		            printf("Pilihan saya : ");
		            scanf(" %c", &menu);
					break;
				case 2:
					system ("cls");
					printf("\tKONVERSI DESIMAL KE BINER\n");
					printf("======================================\n\n");
			   	    printf("Masukan Bilangan Desimal: ");
					scanf("%d",&n);
					for(f=0; n>0; f++){
						a[f] = n%2;
					    n = n/2;
					}
					printf("Hasil Konversi Bilangan Biner:\n ");
				    for(f=f-1 ;f>=0 ;f--) {
					    printf("%d",a[f]);
					}
					printf("\nApakah anda ingin mengulang?(y/t)\n");
		            printf("Pilihan saya : ");
		            scanf(" %c", &menu);
					break;
				default :
					printf("Pilihan tidak ada");
			}
		}while (menu == 'y');
	}while (menu== 't');
	return 0;
}



  


