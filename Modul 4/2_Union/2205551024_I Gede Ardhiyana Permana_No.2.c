#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct s_kubus{
	int sisi;
	int luas_permukaan;
	int volume;
} kbs_s;
union u_kubus{
	int nilai;
}kbs_u;
void validasi();
int main(){
	char pilihan;
	do{
		system("cls");
		printf("Masukkan panjang sisi : ");
		validasi(&kbs_s.sisi);
		kbs_s.luas_permukaan = 6*(kbs_s.sisi * kbs_s.sisi);
		kbs_s.volume = kbs_s.sisi * kbs_s.sisi * kbs_s.sisi;
		printf("|==========================================|\n");
		printf("|           Kubus dengan Struct            |\n");
		printf("|==========================================|");
		printf("\n|Panjang sisi kubus     | %d                ", kbs_s.sisi);
		printf("\n|------------------------------------------|");
		printf("\n|Luas permukaan kubus   | %d               ", kbs_s.luas_permukaan);
		printf("\n|------------------------------------------|");
		printf("\n|Volume kubus           | %d              ", kbs_s.volume);
		printf("\n|==========================================|");
		printf("\n|           Kubus dengan union             |\n");
		printf("|==========================================|\n");
		kbs_u.nilai = kbs_s.sisi;
		printf("|Panjang sisi kubus     | %d", kbs_u.nilai);
		printf("\n|------------------------------------------|");
		kbs_u.nilai = 6*(kbs_u.nilai * kbs_u.nilai);
		printf("\n|Luas permukaan kubus   | %d ", kbs_u.nilai);
		printf("\n|------------------------------------------|");
		kbs_u.nilai = kbs_s.sisi * kbs_s.sisi * kbs_s.sisi;
		printf("\n|Volume kubus           | %d ", kbs_u.nilai);
		printf("\n|==========================================|\n");
		printf("\n|==========================================|");
		printf("\n|Ukuran memori pada kubus struct  | %d\n", sizeof(kbs_s));
		printf("|==========================================|");
		printf("\n|Ukuran memori dari kubus union   | %d\n", sizeof(kbs_u));
		printf("|==========================================|");
		printf("\nIngin mengulang program (y/t) : ");
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
