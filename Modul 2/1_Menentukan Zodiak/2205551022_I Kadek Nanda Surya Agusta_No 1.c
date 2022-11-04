#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void start();
void menu();
void proses();

int main(){
	printf("====================================================================\n");
    printf("  ||    KELOMPOK 10 PRAKTIKUM ALGORITMA DAN PEMROGRAMAN              ||\n\n");
    printf("  ||          2205551022-I Kadek Nanda Surya Agusta                  ||\n");
    printf("  ||          2205551024-I Gede Ardhiyana Permana                    ||\n");
    printf("  ||          2205551025-Komang Bayu Lobi Hartawan                   ||\n");
    printf("  ||          2205551032-I Putu Gede Surya Pratama                   ||\n");
    printf("  ||          2205551134-Gede Ngurah Bagus Nugraha                   ||\n");
    printf("  ||          2205551152-I Putu Surya Adi Wirawan                    ||\n");

    printf("====================================================================\n");
    printf("====================================================================\n\n");
	printf("                  PROGRAM MENENTUKAN ZODIAK\n\n         ");
	printf("===========================================\n\n");
	start();
	return 0;
}

int validasi(){
	char ch; 
	char *data; 
	data= (char *) malloc (sizeof(char)); 
	int index=0;
	
	while ((ch=_getch()) !=13) {
		if (ch>='0' && ch<='9'){
			printf("%c", ch); 
			data[index]=ch; 
			index++;
		}
	}
	data [index]='\0';
	
	return atoi(data); 
}

void start(){
	int pilihan; 
	printf("1. Lanjut ke program untuk menentukan zodiak \n2. Keluar program\n\n"); 
	printf("=================================================\n");
	printf("Masukkan pilihan anda:"); 
	pilihan= validasi();
	system ("cls"); 
	
	switch (pilihan){
		case 1:  
			menu(); 
			break;
		case 2:
			exit(0);
			break; 
		default :
			printf ("Masukkan pilihan yang benar (1-2)\n");
			start();
	}

}
void menu(){
	int pilihan; 
	int tanggal, bulan;
	printf("Daftar Tanggal dan Bulan\n");
	printf("1. Januari (1-31) \t 7.  Juli(1-31)\n");
	printf("2. Februari (1-28)\t 8.  Agustus (1-31)\n");
	printf("3. Maret (1-31)   \t 9.  September (1-30)\n");
	printf("4. April (1-30)   \t 10. Oktober (1-31)\n");
	printf("5. Mei (1-31)     \t 11. November(1-30)\n");
	printf("6. Juni (1-30)    \t 12. Desember (1-31)\n\n");
	printf("===============================================\n");
	
	printf("Masukkan tanggal lahir: ");
	tanggal=validasi();
	
	printf("\nMasukkan bulan lahir  : ");
	bulan= validasi();
	
	printf("\n===============================================\n");
	printf("Tekan enter untuk melihat zodiak anda . . ."); 
	proses(tanggal, bulan); 
}
void proses(int tanggal, int bulan){
	
	getchar();
	system("cls");
	printf("\t\t Zodiak Anda adalah \n");
	if((tanggal>=21 && tanggal<=31 && bulan==3)||(tanggal>=1 && tanggal<=19 &&bulan==4)){
		printf("\t\t       ARIES\n");
	}
	else if ((tanggal>=20&&tanggal<=30&&bulan==4)||(tanggal>=1&&tanggal<=20&&bulan==5)){
		printf("\t\t       TAURUS\n");
	}
	else if((tanggal>=21&&tanggal<=31&&bulan==5)||(tanggal>=1&&tanggal<=20&&bulan==6)){
		printf("\t\t       GEMINI\n");
	}
	else if((tanggal>=21&&tanggal<=30&&bulan==6)||(tanggal>=1&&tanggal<=22&&bulan==7)){
		printf("\t\t       CANCER\n");
	}
	else if((tanggal>=23&&tanggal<=31&&bulan==7)||(tanggal>=1&&tanggal<=22&&bulan==8)){
		printf("\t\t        LEO\n");
	}
	else if((tanggal>=23&&tanggal<=31&&bulan==8)||(tanggal>=1&&tanggal<=22&&bulan==9)){
		printf("\t\t       VIRGO\n");
	}
	else if((tanggal>=23&&tanggal<=30&&bulan==9)||(tanggal>=1&&tanggal<=22&&bulan==10)){
		printf("\t\t       LIBRA\n");
	}
	else if((tanggal>=23&&tanggal<=31&&bulan==10)||(tanggal>=1&&tanggal<=21&&bulan==11)){
		printf("\t\t      SCORPIO\n");
	}
	else if((tanggal>=22&&tanggal<=30&&bulan==11)||(tanggal>=1&&tanggal<=21&&bulan==12)){
		printf("\t\t    SAGITTARIUS\n");
	}
	else if((tanggal>=22&&tanggal<=31&&bulan==12)||(tanggal>=1&&tanggal<=19&&bulan==1)){
		printf("\t\t     CAPRICORN\n");
	}
	else if((tanggal>=20&&tanggal<=31&&bulan==1)||(tanggal>=1&&tanggal<=18&&bulan==2)){
		printf("\t\t     AQUARIUS\n");
	}
	else if((tanggal>=19&&tanggal<=28&&bulan==2)||(tanggal>=1&&tanggal<=20&&bulan==3)){
		printf("\t\t        PISCES\n");
	}
	else{
		printf("Zodiak tidak ditemukan\n");
	}
	start();
	
	
}
