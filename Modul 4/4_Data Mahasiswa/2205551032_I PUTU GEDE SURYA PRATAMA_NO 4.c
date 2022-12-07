#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Fungsi Prototype
void validasi_integer(char *cek, int *tujuan);
void validasi_pilihan(int min, int max, int*pilihan);
void validasi_menu(char *menu_ptr);
void validasi_nim(char *nim);
void input_mhs();
void update_mhs();
void show_mhs();
int search_mhs(char *nim);
void out();

//Fungsi Utama
int main(){
	int pilihan;
	char pilihan_menu;
	char cek[10], nim[11];
	//Loop menu utama.
	do{
		system("cls");
		fflush(stdin);
		printf("\t\t\t+================================================+\n");
		printf("\t\t\t|          SISTEM INFORMASI DATA MAHASISWA       |\n");
	    printf("\t\t\t+================================================+\n");
		printf("\t\t\t+================================================+\n");
	    printf("\t\t\t|         1. Masukan Data Mahasiswa              |\n");
	    printf("\t\t\t|         2. Tampilkan Data Mahasiswa            |\n");
	    printf("\t\t\t|         3. Pencarian Data Mahasiswa            |\n");
	    printf("\t\t\t|         4. Perbarui Data Mahasiswa             |\n");
	    printf("\t\t\t|         5. Keluar Sistem                       |\n");
	    printf("\t\t\t+================================================+\n");
		printf("\n\nMenu yang anda pilih[1][2][3][4][5] : ");
		fgets(cek, 10, stdin);
		validasi_integer(cek, &pilihan);
			switch(pilihan){
				case 1:
					system("cls");
					input_mhs();
					printf("\nApakah anda ingin kembali ke menu utama ? (y/t)");
					printf("\nPilihan saya : ");
					scanf(" %c", &pilihan_menu);
					validasi_menu(&pilihan_menu);
					break;
				case 2:
					system("cls");
					show_mhs();
					printf("\nApakah anda ingin kembali ke menu utama ? (y/t)");
					printf("\nPilihan saya : ");
					scanf(" %c", &pilihan_menu);
					validasi_menu(&pilihan_menu);
					break;
				case 3:
					system("cls");
					update_mhs();
					printf("\nApakah anda ingin kembali ke menu utama ? (y/t)");
					printf("\nPilihan saya : ");
					scanf(" %c", &pilihan_menu);
					validasi_menu(&pilihan_menu);
					break;
				case 4:
					system("cls");
					fflush(stdin);
					printf("Masukkan nim mahasiswa yang ingin anda cari : ");
					fgets(nim, 11, stdin);
					strtok(nim, "\n");
					validasi_nim(nim);
					if(search_mhs(nim) == 0){
						printf("Data tidak ditemukan.");
					};
					printf("\nApakah anda ingin kembali ke menu utama ? (y/t)");
					printf("\nPilihan saya : ");
					scanf(" %c", &pilihan_menu);
					validasi_menu(&pilihan_menu);
					break;
				case 5 :
					out();
					break;
				default:
					system("cls");
					printf("Operasi tidak tersedia");
					printf("\nApakah anda ingin kembali ke menu utama ? (y/t)");
					printf("\nPilihan saya : ");
					scanf(" %c", &pilihan_menu);
					validasi_menu(&pilihan_menu);
					break;
			}
	}while(pilihan_menu == 'y');
	return 0;
}

//validasi Integer
void validasi_integer(char *cek, int *tujuan){
	while(!(sscanf(cek, "%d", tujuan) == 1)){
		printf("Input salah\n");
		printf("Silahkan masukkan nilai kembali : ");
		fgets(cek, 10, stdin);
	}
}

//validasi pilihan
void validasi_pilihan(int min, int max, int*pilihan){
	while(*pilihan < min || *pilihan > max){
		printf("\nPilihan yang anda masukkan salah!\nSilahkan masukkan pilihan yang valid : ");
		scanf("%d", pilihan);
	}
}

//validasi menu
void validasi_menu(char *menu_ptr){
	while(!(*menu_ptr == 'y' || *menu_ptr == 't')){
		printf("\nKarakter yang anda masukkan tidak valid!");
		printf("\nApakah anda ingin kembali ke menu utama ? (y/t) : ");
		scanf(" %c", menu_ptr);
	}
}

//verifikasi NIM
void validasi_nim(char *nim){
	int i, jumlah_digit = 0;
	for(i = 0; i < strlen(nim); i++){
		if(isdigit(nim[i])){
			jumlah_digit++;
		}
	}
	if(jumlah_digit < 10){
			fflush(stdin);
			printf("Input NIM tidak valid!\n");
			printf("Silahkan masukkan kembali NIM mahasiswa : ");
			fgets(nim, 11, stdin);
			strtok(nim,"\n");
			validasi_nim(nim);
	}
}


//update mahasiswa
void update_mhs(){
	FILE *fptr, *fnew;
	fflush(stdin);
	int pilihan, status_pencarian = 0;
	char nim[11], nim_baru[11], nama[175],
	nama_baru[175], baris_teks[200];
	printf("Silahkan masukkan nim mahasiswa : ");
	fgets(nim, 11, stdin);
	strtok(nim, "\n");
	validasi_nim(nim);
	fflush(stdin);
	fptr = fopen("Data Mahasiswa.txt", "r");
	if(fptr == NULL){
		printf("File tidak ditemukan!");
		exit(-1);
	}
	while(fscanf(fptr," %[^\n]", baris_teks) == 1){
		if(strstr(baris_teks,nim) != NULL){
			strcpy(nim, strtok(baris_teks,"|"));
			strcpy(nama, strtok(NULL,"|"));
			printf("\nData ditemukan : \n");
			strcpy(nama_baru, nama);
			printf("Nama : %s\n", nama);
			printf("NIM : %s\n", nim);
			status_pencarian = 1;
		}
	}
	fseek(fptr, 0, SEEK_SET);
	if(status_pencarian == 0){
		printf("Data tidak ditemukan.");
		return;
	}
	printf("\nApa yang ingin anda perbarui :\n[1].NIM mahasiswa\n[2]. Nama mahasiswa");
	printf("\nPilihan saya : ");
	scanf("%d", &pilihan);
	validasi_pilihan(1,2,&pilihan);
	fflush(stdin);
	if(pilihan == 1){
		printf("Silahkan masukkan nim mahasiswa :");
		fgets(nim_baru, 11, stdin);
		strtok(nim_baru, "\n");
		validasi_nim(nim_baru);
	}else{
		strcpy(nim_baru, nim); 
		printf("Silahkan masukkan nama mahasiswa :");
		fgets(nama_baru, 175, stdin);
		strtok(nama_baru, "\n");
	}
	fnew = fopen("new.txt", "w");
	if(fnew == NULL){
		printf("File tidak ditemukan!");
		exit(-1);
	}
	while(fscanf(fptr, " %[^\n]", baris_teks) == 1){
		if(strstr(baris_teks, nim) != NULL){
			strcpy(baris_teks,"");
			fprintf(fnew,"%s|%s\n", nim_baru,nama_baru);
		}
		if(strlen(baris_teks) != 0){
			fprintf(fnew,"%s\n", baris_teks);
		}
	}
	fclose(fptr);
	fclose(fnew);
	remove("Data Mahasiswa.txt"); 
	rename("new.txt", "Data Mahasiswa.txt");
	printf("\nData mahasiswa berhasil diperbarui!");
	}

//input mahasiswa
void input_mhs(){
	FILE *fptr;
	char nama[175], nim[11];
	fflush(stdin);
	printf("Silahkan masukkan nim mahasiswa : ");
	fgets(nim, 11, stdin);
	strtok(nim, "\n");
	validasi_nim(nim);
	fflush(stdin);
	if(search_mhs(nim) == 1){
		printf("Data telah tersimpan pada file Data Mahasiswa.txt!\n");
		return;
	}
	printf("Silahkan masukkan nama mahasiswa : ");
	fgets(nama, 175, stdin);
	strtok(nama, "\n");
	fptr = fopen("Data Mahasiswa.txt", "a+");
	if(fptr == NULL){
		printf("File tidak ditemukan!");
		exit(-1);
	}
	fprintf(fptr,"%s|%s\n", nim, nama);
	fclose(fptr);
	printf("\nData mahasiswa berhasil di-input!");
}

//show mahasiswa
void show_mhs(){
	FILE *fptr;
	char baris_teks[200];
	fptr = fopen("Data Mahasiswa.txt", "r");
	if(fptr == NULL){
		printf("File tidak ditemukan!");
		exit(-1);
	}
	printf("Data mahasiswa yang tersimpan pada file Data Mahasiswa.txt : \n");
	while(fscanf(fptr, " %[^\n]", baris_teks) == 1){
		printf("%s\n", baris_teks);
	}
	fclose(fptr);
}

//search mahasiswa
int search_mhs(char *nim){
	FILE *fptr;
	char baris_teks[200], nama[175], nim_file[11];
	int status_pencarian = 0;
	fptr = fopen("Data Mahasiswa.txt", "r");
	if(fptr == NULL){
		printf("File tidak ditemukan!");
		exit(-1);
	}
	while(fscanf(fptr," %[^\n]", baris_teks) == 1){
		if(strstr(baris_teks,nim) != NULL){
			strcpy(nim_file,strtok(baris_teks,"|")); 
			strcpy(nama, strtok(NULL,"|"));
			printf("\nData ditemukan : \n");
			printf("Nama : %s\n", nama);
			printf("NIM : %s\n", nim);
			status_pencarian = 1;
		}
	}
	fclose(fptr);
	return status_pencarian;
}

void out(){
	system("cls");
	printf("\t\t\t+================================================+\n");
	printf("\t\t\t|                 Terima Kasih                   |\n");
	printf("\t\t\t+================================================+\n");
}

