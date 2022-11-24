#include <stdio.h>
#include <stdlib.h>
void validasi();
int main(){
    int a, b, tambah, kurang, kali, modulus;
    char menu;
    float bagi;
    do{
    	system("cls");
	    printf("\t\t\t\t\t====================================\n");
	    printf("\t\t\t\t\t\tPROGRAM KALKULATOR\n");
	    printf("\t\t\t\t\t====================================\n\n");
	    printf("Masukkan Angka pertama : ");
	    validasi(&a);
	    printf("Masukkan Angka kedua : ");
	    validasi(&b);
	    printf ("\n====== Operasi Aritmatika ======\n\n");
	    tambah = a+b;
	    printf ("Hasil penjumlahan   : %d\n", tambah);
	    kurang = a-b;
	    printf ("Hasil peengurangan  : %d\n", kurang);
	    kali = a*b;
	    printf ("Hasil perkalian     : %d\n", kali);
	    bagi = (float)a/(float)b;
	    printf("Hasil pembagian     : %.2f\n", bagi);
	    modulus = a%b;
	    printf("Hasil modulus       : %d\n", modulus);
	    printf ("================================\n");
	    printf("Apakah ingin mengulang (y/t) : ");
		scanf(" %c", &menu);
		getchar();
	}while(menu=='y' );
    return 0;
}
void validasi(int *var){
	char buffer[512];
	fgets(buffer, sizeof(buffer), stdin);
	while(sscanf(buffer, "%d", var) != 1){
		printf("\nInput hanya bilangan bulat\n");
		printf("silakan input ulang : ");
		fgets(buffer, sizeof(buffer), stdin);
	}
}
