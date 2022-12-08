#include <stdio.h>
#include <stdlib.h>
#define pokok 10625
struct harian{
	int jam;
	int jam_lembur;
	int total_jam;
	int gaji;
	int gaji_lembur;
	int total_gaji;
};
struct harian hari;
void validasi();
int main(){
	char pilihan;
	do{
		system("cls");
		printf("Masukkan jam kerja : ");
		validasi(&hari.total_jam);
		if(hari.total_jam > 8){
			hari.jam_lembur = hari.total_jam - 8;
			hari.jam = 8;
			hari.gaji = hari.jam * pokok;
			hari.gaji_lembur = hari.jam_lembur * (8 * pokok);
		}else{
			hari.jam = hari.total_jam;
			hari.gaji = hari.total_jam * pokok;
			hari.jam_lembur = 0;
			hari.gaji_lembur = 0;
		}
		hari.total_gaji = hari.gaji + hari.gaji_lembur;
		hari.total_jam = hari.jam + hari.jam_lembur;
		printf("|===========================================\n");
		printf("|\tRINCIAN PERHITUNGAN GAJI\t   |\n");
		printf("|==========================================|\n");
		printf("|Total jam kerja non lembur | %d jam\t   |\n", hari.jam);
		printf("|---------------------------+--------------|\n");
		printf("|Total jam lembur           | %d jam\t   |\n", hari.jam_lembur);
		printf("|---------------------------+--------------|\n");
		printf("|Total jam kerja sehari     | %d jam\t   |\n", hari.total_jam);
		printf("|---------------------------+--------------|\n");
		printf("|Total gaji non lembur      | Rp.%d \t   |\n", hari.gaji);
		printf("|---------------------------+--------------|\n");
		printf("|Total gaji lembur          | Rp.%d    |\n", hari.gaji_lembur);
		printf("|---------------------------+--------------|\n");
		printf("|Total gaji dalam sehari    | Rp.%d    |\n", hari.total_gaji);
		printf("|------------------------------------------|\n");
		printf("Ingin mengulang (y/t) : ");
		scanf(" %c", &pilihan);
		getchar();
	}while(pilihan=='y');
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
