#include <stdio.h>
#include <stdlib.h>
#define PHI 3.14
void luas_segitigasembarang(float a, float t){
	float luas= 0.5*a*t;
	printf("luas segitiga sembarang adalah %.2f", luas);
}
void keliling_segitigasembarang (float sisi1, float sisi2, float sisi3){
	float keliling=sisi1+sisi2+sisi3;
	printf("\nKeliling segitiga sembarang adalah %.2f", keliling);
}
void luas_belahketupat(float diameter1, float diameter2){
	float luas= 0.5*diameter1*diameter2;
	printf("luas belah ketupat adalah %.2f", luas);
}
void keliling_belahketupat (float sisi){
	float keliling=4*sisi;
	printf("\nKeliling belah ketupat adalah %.2f", keliling);
}
void luas_jajargenjang(float alas , float tinggi){
	float luas=alas*tinggi;
	printf("Luas jajar genjang adalah %.2f", luas);
}
void keliling_jajargenjang(float alas, float tinggi){
	float keliling= 2*alas*tinggi;
	printf("\nKeliling jajar genjang adalah %.2f", keliling);
}
void luas_trapesium (float sisi_atas, float sisi_bawah, float tinggi){
	float luas=0.5*(sisi_atas+sisi_bawah)*tinggi;
	printf("Luas trapesium adalah %.2f", luas);
}
void keliling_trapesium(float sisi1, float sisi2, float sisi3, float sisi4){
	float keliling=sisi1+sisi2+sisi3+sisi4;
	printf("\nKeliling trapesium adalah %.2f", keliling);
}
void luas_lingkaran(float jari_jari){
	float luas=3.14*jari_jari*jari_jari;
	printf("Luas lingkaran adalah %.2f", luas);
}
void keliling_lingkaran( float jari_jari){
	float keliling=2*3.14*jari_jari;
	printf("\nKeliling lingkaran adalah %.2f", keliling);
}
int main(){
	int pilihan;
	char menu;
	//segitiga sembarang
	float alas_segitigasembarang, tinggi_segitigasembarang ,sisi1, sisi2, sisi3;
	//belah kerupat
	float diameter1, diameter2, sisi;
	//jajar genjang
	float alas_jajargenjang, tinggi_jajargenjang;
	//trapesium
	float sisi_atas,sisi_bawah, tinggi_trapesium, sisi_atas1,sisi_bawah2,sisi_kiri3,sisi_kanan4;
	//lingkaran
	float jari_jari_lingkaran;
	do{
		system("cls");
	printf("Program Menghitung Luas Dan Keliling Bangun Datar");
	printf("\n1. Segitiga Sembbarang\n2. Belah Ketupat\n3. Jajar Genjang\n4. Trapesium\n5. Lingkaran");
	printf("\nMasukan Pilihan Menu Anda:");
	scanf("%d", &pilihan);
	do{
	switch(pilihan){
		case 1: 
			printf("\nPerhitungan Luas dan Keliling Segitiga Sembarang");
			printf("\nMasukan Alas : ", alas_segitigasembarang);
			scanf("%f", &alas_segitigasembarang);
			printf("Masukan Tinggi Segitiga Sembarang : ", tinggi_segitigasembarang);
			scanf("%f", &tinggi_segitigasembarang);
			printf("Masukan sisi1 : ", sisi1);
			scanf("%f", &sisi1);
			printf("Masukan sisi2 : ", sisi2);
			scanf("%f", &sisi2);
			printf("Masukan sisi3 : ", sisi3);
			scanf("%f", &sisi3);
			luas_segitigasembarang(alas_segitigasembarang,tinggi_segitigasembarang);
			keliling_segitigasembarang(sisi1,sisi2,sisi3);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;
		case 2: 
			printf("\nPerhitungan Luas dan Keliling Belah Ketupat");
			printf("\nMasukan Diameter 1 : ", diameter1);
			scanf("%f", &diameter1);
			printf("Masukan Diameter 2 : ", diameter2);
			scanf("%f", &diameter2);
			printf("Masukan sisi : ", sisi);
			scanf("%f", &sisi);
			luas_belahketupat(diameter1, diameter2);
			keliling_belahketupat(sisi);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;
		case 3: 
			printf("\nPerhitungan Luas dan Keliling jajar Genjang");
			printf("\nMasukan Alas Jajar Genjang : ", alas_jajargenjang);
			scanf("%f", &alas_jajargenjang);
			printf("Masukan Tinggi Jajar Genjang : ", tinggi_jajargenjang);
			scanf("%f", &tinggi_jajargenjang);
			luas_jajargenjang(alas_jajargenjang, tinggi_jajargenjang);
			keliling_jajargenjang(alas_jajargenjang, tinggi_jajargenjang);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;
		case 4: 
			printf("\nPerhitungan Luas dan Keliling Trapesium");
			printf("\nMasukan Sisi Atas : ", sisi_atas);
			scanf("%f", &sisi_atas);
			printf("Masukan Sisi Bawah : ", sisi_bawah);
			scanf("%f", &sisi_bawah);
			printf("Masukan Tinggi : ", tinggi_trapesium);
			scanf("%f", &tinggi_trapesium);
			printf("Masukan Sisi Atas 1 : ", sisi_atas1);
			scanf("%f", &sisi_atas1);
			printf("Masukan Sisi Bawah 2 : ", sisi_bawah2);
			scanf("%f", &sisi_bawah2);
			printf("Masukan Sisi Kiri 3 : ", sisi_kiri3);
			scanf("%f", &sisi_kiri3);
			printf("Masukan Sisi Kanan 4 : ", sisi_kanan4);
			scanf("%f", &sisi_kanan4);
			luas_trapesium(sisi_atas, sisi_bawah, tinggi_trapesium);
			keliling_trapesium(sisi_atas1, sisi_bawah2, sisi_kiri3, sisi_kanan4);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;
		case 5: 
			printf("\nPerhitungan Luas dan Keliling Lingkaran");
			printf("\nMasukan Jari-Jari : ", jari_jari_lingkaran);
			scanf("%f", &jari_jari_lingkaran);
			luas_lingkaran(jari_jari_lingkaran);
			keliling_lingkaran(jari_jari_lingkaran);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;
		
}
}while (menu == 't');
}while(menu == 'y');
return 0;
}



