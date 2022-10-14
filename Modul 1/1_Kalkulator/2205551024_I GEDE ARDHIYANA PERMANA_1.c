#include <stdio.h>

int main(){
    int a, b, tambah, kurang, kali, modulus;
    float bagi;
    printf("\t\t\t\t\t====================================\n");
    printf("\t\t\t\t\t\tPROGRAM KALKULATOR\n");
    printf("\t\t\t\t\t====================================\n\n");
    printf("Masukkan Angka pertama : ");
    scanf("%d", &a);
    printf("Masukkan Angka kedua : ");
    scanf("%d", &b);
    printf ("\n====== Operasi Aritmatika ======\n\n");
    tambah = a+b;
    printf ("Hasil penjumlahan   : %d\n", tambah);
    kurang = a-b;
    printf ("Hasil peengurangan  : %d\n", kurang);
    kali = a*b;
    printf ("Hasil perkalian     : %d\n", kali);
    bagi = a/b;
    printf("Hasil pembagian     : %.2f\n", bagi);
    modulus = a%b;
    printf("Hasil modulus       : %d\n", modulus);
    printf ("================================\n");
    return 0;
}

