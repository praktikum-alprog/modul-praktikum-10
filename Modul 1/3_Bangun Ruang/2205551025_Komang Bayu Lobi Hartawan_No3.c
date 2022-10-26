#include <stdio.h>
#include <stdlib.h>
#define PHI 3.14

//Fungsi Tabung
float luas_permukaan_tabung(float jari_jari, float tinggi);
float volume_tabung(float jari_jari, float tinggi);
//Fungsi Bola
float luas_permukaan_bola(float jari_jari);
float volume_bola(float jari_jari);
//Fungsi Prisma Segitiga
float luas_permukaan_prisma_segitiga(float sisi_A, float sisi_B,float sisi_C, float alas, float tinggi_S, float tinggi_P);
float volume_prisma_segitiga(float alas, float tinggi_S, float tinggi_P);
//Fungsi Limas Segiempat
float luas_permukaan_limas_segiempat(float sisi, float alas, float tinggi);
float volume_limas_segiempat(float sisi, float tinggi);
//Fungsi Kerucut
float luas_permukaan_kerucut(float jari_jari, float tinggi, float selimut);
float volume_kerucut(float jari_jari, float tinggi);
int main(){
	int pilihan;
	char menu;
	//Tabung
	float jari_jari_tabung, tinggi_tabung, luas_Tabung, volume_Tabung;
	//Bola
	float jari_jari_bola, luas_Bola, volume_Bola;
	//Prisma Segitiga
	float sisi_A,sisi_B,sisi_C, alas_prisma, tinggi_S,tinggi_P, luas_prisma, volume_prisma;
	//Limas Segiempat
	float sisi_limas, alas_limas, tinggi_limas, luas_limas, volume_limas;
	//Kerucut
	float jari_jari_kerucut, tinggi_kerucut, selimut_kerucut, luas_kerucut, volume_Kerucut;
	do{
		system("cls");
	printf("Program Menghitung Luas Permukaan dan Volume Bangun Ruang");
	printf("\n1. Tabung\n2. Bola\n3. Prisma Segitiga\n4. Limas Segiempat\n5. Kerucut");
	printf("\nMasukan Pilihan Menu Anda:");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1: 
			printf("\nPerhitungan Luas Permukaan dan Volume Tabung");
			printf("\nMasukan jari-jari tabung : ", jari_jari_tabung);
			scanf("%f", &jari_jari_tabung);
			printf("Masukan tinggi tabung : ", tinggi_tabung);
			scanf("%f", &tinggi_tabung);
			luas_Tabung=luas_permukaan_tabung(jari_jari_tabung, tinggi_tabung);
			volume_Tabung=volume_tabung(jari_jari_tabung, tinggi_tabung);
			printf("luas permukaan tabung adalah %.2f", luas_Tabung);
			printf("\nvolume tabung adalah %.2f", volume_Tabung);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;
		
		case 2: 
			printf("\nPerhitungan Luas Permukaan dan Volume Bola");
			printf("\nMasukan jari-jari bola : ", jari_jari_bola);
			scanf("%f", &jari_jari_bola);
			luas_Bola = luas_permukaan_bola(jari_jari_bola);
			volume_Bola = volume_bola(jari_jari_bola);
			printf("luas permukaan bola adalah %.2f", luas_Bola);
			printf("\nvolume bola adalah %.2f", volume_Bola);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;
		
		case 3: 
			printf("\nPerhitungan Luas Permukaan dan Volume Prisma Segitiga");
			printf("\nMasukan nilai panjang sisi_A : ", sisi_A);
			scanf("%f", &sisi_A);
			printf("Masukan nilai panjang sisi_B : ", sisi_B);
			scanf("%f", &sisi_B);
			printf("Masukan nilai panjang sisi_C : ", sisi_C);
			scanf("%f", &sisi_C);
			printf("Masukan nilai alas segitiga : ", alas_prisma);
			scanf("%f", &alas_prisma);
			printf("Masukan nilai tinggi segitiga : ", tinggi_S);
			scanf("%f", &tinggi_S);
			printf("Masukan nilai tinggi prisma : ", tinggi_P);
			scanf("%f", &tinggi_P);
			luas_prisma = luas_permukaan_prisma_segitiga(sisi_A,sisi_B,sisi_C, alas_prisma, tinggi_S, tinggi_P);
			volume_prisma = volume_prisma_segitiga(alas_prisma, tinggi_S, tinggi_P);
			printf("luas permukaan prisma segitiga adalah %.2f", luas_prisma, alas_prisma, tinggi_S, tinggi_P);
			printf("\nvolume prisma segitiga adalah adalah %.2f", volume_prisma, sisi_A,sisi_B, sisi_C, tinggi_S, tinggi_P);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;
			
		case 4: 			
			printf("\nPerhitungan Luas Permukaan dan Volume Limas Segiempat");
			printf("\nMasukan nilai panjang sisi : ", sisi_limas);
			scanf("%f", &sisi_limas);
			printf("Masukan nilai alas : ", alas_limas);
			scanf("%f", &alas_limas);
			printf("Masukan nilai tinggi : ", tinggi_limas);
			scanf("%f", &tinggi_limas);
			luas_limas = luas_permukaan_limas_segiempat(sisi_limas, alas_limas, tinggi_limas);
			volume_limas = volume_limas_segiempat(sisi_limas, tinggi_limas);
			printf("luas permukaan limas segiempat adalah %.2f", luas_limas, alas_limas, tinggi_limas);
			printf("\nvolume limas segiempat adalah adalah %.2f", volume_limas, sisi_limas, tinggi_limas);
   			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;

		case 5: 
			printf("\nPerhitungan Luas Permukaan dan Volume Kerucut");
			printf("\nMasukan nilai jari-jari : ", jari_jari_kerucut);
			scanf("%f", &jari_jari_kerucut);
			printf("Masukan nilai tinggi kerucut : ", tinggi_kerucut);
			scanf("%f", &tinggi_kerucut);
			printf("Masukan nilai selimut kerucut : ", selimut_kerucut);
			scanf("%f", &selimut_kerucut);
			luas_kerucut = luas_permukaan_kerucut(jari_jari_kerucut, tinggi_kerucut, selimut_kerucut);
			volume_Kerucut = volume_kerucut(jari_jari_kerucut, tinggi_kerucut);
			printf("luas permukaan kerucut adalah %.2f", luas_kerucut, jari_jari_kerucut, tinggi_kerucut, selimut_kerucut);
			printf("\nvolume kerucut adalah %.2f", volume_kerucut, jari_jari_kerucut, tinggi_kerucut);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;			
		}
	}while(menu == 'y');
	printf("\nTerimakasih Telah Menggunakan Program Ini!");
	return 0;
}
//Fungsi Tabung
float luas_permukaan_tabung(float jari_jari, float tinggi){
	
	float luas;
	luas = 2*PHI*jari_jari*(jari_jari+tinggi);
	return luas;
}
float volume_tabung(float jari_jari, float tinggi){
	
	float volume;
	volume = PHI*jari_jari*jari_jari*tinggi;
	return volume;
}
//Fungsi Bola
float luas_permukaan_bola(float jari_jari){
	
	float luas;
	luas = 4*PHI*jari_jari*jari_jari;
	return luas;
}
float volume_bola(float jari_jari){
	
	float volume;
	volume = (4*PHI*jari_jari*jari_jari*jari_jari)/3;
	return volume;
}
//Fungsi Prisma Segitiga
float luas_permukaan_prisma_segitiga(float sisi_A, float sisi_B,float sisi_C, float alas, float tinggi_S, float tinggi_P){
	
	float luas;
	luas = (2*(0.5*alas*tinggi_S))+((sisi_A+sisi_B+sisi_C)*tinggi_P);
	return luas;
}
float volume_prisma_segitiga(float alas, float tinggi_S, float tinggi_P){
	
	float volume;
	volume = (0.5*alas*tinggi_S)*tinggi_P;
	return volume;
}
//Fungsi Limas Segiempat
float luas_permukaan_limas_segiempat(float sisi, float alas, float tinggi){
	
	float luas;
	luas = (sisi*sisi)+4*(0.5*alas*tinggi);
	return luas;
}
float volume_limas_segiempat(float sisi, float tinggi){
	
	float volume;
	volume = (1*sisi*sisi*tinggi)/3;
	return volume;
}
//Fungsi Kerucut
float luas_permukaan_kerucut(float jari_jari, float tinggi, float selimut){
	
	float luas;
	luas = PHI*jari_jari*jari_jari+(PHI*jari_jari*selimut);
	return luas;
}
float volume_kerucut(float jari_jari, float tinggi){
	
	float volume;
	volume = 1*PHI*jari_jari*jari_jari*tinggi/3;
	return volume;
}
