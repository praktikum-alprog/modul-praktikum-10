#include <stdio.h>
#include <stdlib.h>
int main(void){
	void perkalian();
	void penjumlahan();
	void transpose();
	int pilihan;
	char menu;
	do{
		system("cls");
		printf("Menghitung matriks");
		printf("\n1. Perkalian\n2. Penjumlahan\n3. Transpose\n");
		printf("Masukkan pilihanmu (1-3) : ");
		scanf("%d", &pilihan);
		switch(pilihan){
			case 1:
				perkalian();
				break;
			case 2:
				penjumlahan();
				break;
			case 3:
				transpose();
				break;
			default:
				printf("Inputan salah");
			}
		printf("\nApakah ingin mengulang (y/t) : ");
		scanf(" %c", &menu);
	}while (menu=='y');
	return 0;
}
void perkalian(){
	
}
void penjumlahan(){
	
	int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  	printf("Masukkan jumlah baris matriks: ");
  	scanf("%d", &m);
  	printf("Masukkan jumlah kolom matriks: ");
  	scanf("%d", &n);
  	printf("Masukkan elemen matrix pertama: \n");
	  for (i = 0; i < m; i++)
	  {
	    for (j = 0; j < n; j++)
	    {
	      scanf("%d", &matriks1[i][j]);
	    }
	  }
	  printf("Masukkan elemen matrix kedua: \n");
	  for (i = 0; i < m; i++)
	  {
	    for (j = 0; j < n; j++)
	    {
	      scanf("%d", &matriks2[i][j]);
	    }
	  }
	  printf("hasil penjumlahan matrix: \n");
	  for (i = 0; i < m; i++)
	  {
	    for (j = 0; j < n; j++)
	    {
	      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
	      printf("%d \t", hasil[i][j]);
	    }
	    printf("\n");
	  }
	  return hasil;
}
void transpose(){
	
}
