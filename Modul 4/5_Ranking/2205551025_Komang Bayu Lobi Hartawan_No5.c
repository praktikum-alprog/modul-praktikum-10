#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa{
	char nama[100];
	int nilai;
};
struct mahasiswa mhs;
void input();
void asistenin();
void tampilan_asistenout();
void asistenout(char nama_mhs[][100], int nilai[], int size);
void sort_namanilai();
void input_int(int *var);

int main(){
	int pilihan;
	char pilih='y';
	do{
	system("cls");
	printf("Selamat Datang Di Perankingan Mahasiswa\n");
	printf("1. Masukan Nilai Mahasiswa\n2. Isi File Asistenin\n3. File Rangking Mahasiswa\n");
	scanf("%d", &pilihan);
		switch(pilihan){
			case 1:
				input();
				printf("Apakah anda ingin mengulang (y/t)\n");
				scanf(" %c", &pilih);
				break;
			case 2:
				asistenin();
				printf("Apakah anda ingin mengulang (y/t)\n");
				scanf(" %c", &pilih);
				break;
			case 3:
				system("cls");
				sort_namanilai();
				printf("Apakah anda ingin mengulang (y/t)\n");
				scanf(" %c", &pilih);
				break;
			default:
				printf("Eror");
				break;
		}
	}while(pilih=='y');
	printf("Terimakasih");
	return 0;
}
void input(){
	FILE *fptr;
	printf("Masukkan nama mahasiswa : ");
	scanf("%s", &mhs.nama);
	printf("Masukkan nilai mahasiswa : ");
	getchar();
	input_int(&mhs.nilai);
	fptr = fopen("asistenin.txt", "a+");
	fprintf(fptr,"%s\n%d\n", mhs.nama, mhs.nilai);
	fclose(fptr);
	printf("\nNilai mahasiswa berhasil di-input!");
}

void asistenin(){
	FILE *fptr;
	fptr = fopen("asistenin.txt","r");
	printf("Isi File :");
	while(fscanf(fptr, "%s" "%d", mhs.nama, &mhs.nilai)==2){
		printf("\n%s\n%d", mhs.nama, mhs.nilai);
	}
	printf("\n");
	fclose(fptr);
}

void tampilan_asistenout(){
	FILE *fptr;
	char print[150];
	fptr = fopen("asistenout.txt", "r");
	while(fscanf(fptr, " %[^\n]", print) == 1){
	printf("%s\n", print);
	}
	fclose(fptr);
}

void asistenout(char nama_mhs[][100], int nilai[], int size){
	FILE *fptr;
	int i;
	fptr = fopen("asistenout.txt", "w+");
	fprintf(fptr, "Nilai Mata Kuliah Algoritma dan Pemrograman\n");
	for(i = 0; i < size; i++){
	fprintf(fptr,"%d. %s %d\n", i+1,
	nama_mhs[i], nilai[i]);
	}
	fclose(fptr);
	tampilan_asistenout();
}

void sort_namanilai(){
	int i, j, size, step;
	FILE *fptr;
	fptr = fopen("asistenin.txt", "r");
	while(fscanf(fptr, " %[^\n] %d", mhs.nama, &mhs.nilai) == 2){
	size++;
	}
	char nama_mhs[size][100];
	int arr_nilai[size], arr_sorting[size];
	fseek(fptr, 0, SEEK_SET);
	while(fscanf(fptr, " %[^\n] %d", mhs.nama, &mhs.nilai) == 2){
	arr_nilai[i] = mhs.nilai;
	strcpy(nama_mhs[i], mhs.nama);
	i++;
	}
	fclose(fptr);
	for (step = 0; step < size - 1; step++) {
		for (j = 0; j < size - step - 1; j++) {
			if (arr_nilai[j] < arr_nilai[j + 1]) {
				int temp = arr_nilai[j];
				arr_nilai[j] = arr_nilai[j + 1];
				arr_nilai[j + 1] = temp;
				char temp_str[100];
				strcpy(temp_str, nama_mhs[j]);
				strcpy(nama_mhs[j], nama_mhs[j+1]);
				strcpy(nama_mhs[j+1], temp_str);
			}
		}
	}
	asistenout(nama_mhs, arr_nilai, size);
}
void input_int(int *var){
	char buffer[512];
	fgets(buffer, sizeof(buffer), stdin);
	while(sscanf(buffer, "%d",var)!=1){
		printf("Input hanya berupa angka");
		printf("\nMasukan Lagi : ");
		fgets(buffer, sizeof(buffer), stdin);
	}
}

