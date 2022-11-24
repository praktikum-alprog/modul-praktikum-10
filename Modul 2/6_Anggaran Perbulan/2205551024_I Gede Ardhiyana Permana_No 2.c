#include <stdio.h>
#include <stdlib.h>
void validasi();
int main(){
	int p, i, t, bunga, angsuran, total=0, y=1;
	int totala, totalb;
	char menu;
	do{
		system("cls");
		printf("============================================\n");
		printf("\tPROGRAM  MENGHITUNG ANGSURAN\t\t\t\t\n");
		printf("============================================\n");
		printf("\nMasukkan Pokok Pinjaman : ");
		validasi(&p);
		printf("Masukkan Besar Bunga (persen) : ");
		validasi(&i);
		printf("Masukkan Lama Peminjaman (bulan) : ");
		validasi(&t);
		printf("|------------------------------------------------------------|\n");
		printf("| Bulan |   Bunga   |  Angsuran Pokok  |  Angsuran Perbulan  |\n");
		printf("|------------------------------------------------------------|\n");
		y = 1;
		while(y<=t){
			angsuran = p/t;
			bunga = (p - ((y-1) * angsuran)) * i/100/12;
			total = angsuran+bunga;
			printf("| %d    |  Rp.%d    |  Rp.%d          |  Rp.%d          \n", y, bunga, angsuran, total);
			printf("|------------------------------------------------------------|\n");
			totalb=totalb+bunga;
			totala=totala+total;
			y++;
		}
		printf("| Total Bunga                          |  Rp.%d               \n", totalb);
		printf("|------------------------------------------------------------|\n");
		printf("| Total Angsuran                       |  Rp.%d               \n", totala);
		printf("|------------------------------------------------------------|\n");
		printf("Apakah ingin mengulang (y/t) : ");
		scanf(" %c", &menu);
		getchar();
	}while(menu=='y');
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
