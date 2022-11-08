#include <stdio.h>
#include <stdlib.h>

int nilai_akhir(int absensi, int tugas1, int tugas2, int tugas3, int quiz, int uas, int uts, int total);

int main(){
	int absensi, tugas1, tugas2, tugas3, quiz, uas, uts, total;
	char *nilai;
	char pilihan = 'y';
	do{
		system("cls");
		printf("Menghitung Nilai Akhir\n");
		printf("Masukan Absensi : ", absensi);
		scanf("\n%d",&absensi);
		printf("Masukan Nilai Tugas Pertama : ", tugas1);
		scanf("%d",&tugas1);
		printf("Masukan Nilai Tugas Kedua : ", tugas2);
		scanf("%d",&tugas2);
		printf("Masukan Nilai Tugas Ketiga : ", tugas3);
		scanf("%d",&tugas3);
		printf("Masukan Nilai Quiz : ", quiz);
		scanf("%d",&quiz);
		printf("Masukan Nilai UAS : ", uas);
		scanf("%d",&uas);
		printf("Masukan Nilai UTS : ", uts);
		scanf("%d",&uts);
		
		total=nilai_akhir( absensi, tugas1, tugas2, tugas3, quiz, uas, uts, total);
	
		if(total>=0 && total<45){
			nilai="E";
		}else if(total>=45 && total<50){
			nilai="D";
		}else if(total>=50 && total<55){
			nilai="D+";
		}else if(total>=55 && total<60){
			nilai="C";
		}else if(total>=60 && total<65){
			nilai="C+";
		}else if(total>=65 && total<75){
			nilai="B";
		}else if(total>=75 && total<80){
			nilai="B+";
		}else if(total>=80 && total<=100){
			nilai="A";
		}
		printf("Total adalah %d\n", total);
		printf("Nilai adalah %s", nilai);
	
		printf("\nApakah Anda Ingin Mengulang?\n");
	    printf("Jawab (y/t): ");
	    scanf(" %c", &pilihan);
		printf("\n");
	}while(pilihan=='y');
	printf("Terimakasih Telah Mengisi Nilai!");
	return 0;
}
int nilai_akhir(int absensi, int tugas1, int tugas2, int tugas3, int quiz, int uas, int uts, int total){
	int nilai_akhir;
	nilai_akhir=((absensi/15*0.05*100 )+(((tugas1+tugas2+tugas3)/3)*0.2)+(quiz*0.15) + (uas*0.3 )+ (uts*0.3));
	return nilai_akhir;
}
