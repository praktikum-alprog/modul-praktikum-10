#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define DATA1K 1000
#define DATA16K 16000
#define DATA64K 64000

void generate_angka(int *array, int jumlah_data){	
	int a;
	printf("\n");
	for(a=1;a<=jumlah_data;a++){
		array[a] = rand();
		printf("%6d  \t", array[a]);
	}
	printf("\n");
}
void bubble_point(int *array, int jumlah_data){
	printf("Urutan berdasarkan Pointer\n ");
	int a, b, d;
	generate_angka(array, jumlah_data);
	for(a=1; a<=(jumlah_data-1); a++){
		for (b=jumlah_data; b>=(1+a); b--){
			if(array[b-1] > array[b]){
				d=array[b-1];
				array[b-1] = array[b];
				array[b] = d;
			}
		}
	}
	printf("\n\nData setelah di sorting : \n");
	for(a=1;a<=jumlah_data;a++){
		printf("%6d  \t", array[a]);
	}	
	
	
	
}
void bubble_sort(int jumlah_data){
	printf ("Urutan Berdasarkan Bubble Sort\n");
	int a, b, d, array[jumlah_data];
	generate_angka(array, jumlah_data);
	for(a=1; a<=(jumlah_data-1); a++){
		for (b=jumlah_data; b>=(1+a); b--){
			if(array[b-1] > array[b]){
				d=array[b-1];
				array[b-1] = array[b];
				array[b] = d;
			}
		}
	}
	printf("\n\nData setelah di sorting : \n");
	for(a=1;a<=jumlah_data;a++){
		printf("%6d  \t", array[a]);
	}	
}

void waktu(){
	float detik = clock();
	printf("\nWaktu yang dibutuhkan : %.3f detik\n", (float)detik / CLOCKS_PER_SEC);
}

int main(){
	int pilihan;
	int menu;
	int data1k[1000];
	int data16k[16000];
	int data64k[64000];
	
	do {
		system("cls");
		printf("1. Panjang data 1000\n");
		printf("2. Panjang data 16000\n");
		printf("3. Panjang data 64000\n");
	
		printf("\nMasukkan pilihan anda : ");
		scanf("%d", &pilihan);
		switch(pilihan){
			case 1:
				bubble_sort(DATA1K);
				waktu();
				bubble_point(data1k, DATA1K);
				waktu();
				printf("======================================\n");
					printf("\nApakah anda ingin mengulang?(y/t)\n");
				    printf("Pilihan saya : ");
				    scanf(" %c", &menu);
				break;
			case 2:
				bubble_sort(DATA16K);
				waktu();
				printf("======================================\n");
					printf("\nApakah anda ingin mengulang?(y/t)\n");
				    printf("Pilihan saya : ");
				    scanf(" %c", &menu);
				break;
				
			case 3:
				bubble_sort(DATA64K);
				waktu();
				printf("======================================\n");
					printf("\nApakah anda ingin mengulang?(y/t)\n");
				    printf("Pilihan saya : ");
				    scanf(" %c", &menu);
				break;
	
		}
	}while (menu == 'y');
	printf ("THANK YOU FOR USING THIS PROGRAM...");
	return 0;
}

