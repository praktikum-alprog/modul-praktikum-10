#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void enkripsi(char* plainText, int key);
void dekripsi(char* cipherText, int key);
int main(void){
	int key;
	char plainText[101];
	char cipherText[101];
	int pilih;
	char ulang='y';
	do{
	system("cls");
	printf("Masukan plainText atau cipherText : \n");
	fgets(plainText, sizeof(plainText), stdin);
	printf("Masukan Pergeseran : \n", key);
	scanf("%d", &key);
	printf("Pilih menu\n");
	printf("1. Enkripsi\n2. Dekripsi\n");
	scanf(" %d", &pilih);
	switch(pilih){
		case 1:
			printf("cipherText : ");
			enkripsi(plainText, key);
			system("pause");
			printf("Apakah anda ingin mengulang?\n");
			printf("Jawab (y/t)\n");
			scanf(" %c", &ulang);
			getchar();
			break;
		case 2:
			printf("plainText : ");
			dekripsi(plainText, key);
			system("pause");
			printf("Apakah anda ingin mengulang?\n");
			printf("Jawab (y/t)\n");
			scanf(" %c", &ulang);
			getchar();
			break;
		}
	}while(ulang=='y');
	printf("Terimakasih");
}

void enkripsi(char* plainText, int key){
	int i=0;
	int cypherValue;
	char cypher;
	while(plainText [i] != '\0' && strlen(plainText)-1>i){
		if(plainText[i]!= ' '){
			cypherValue = ((int)plainText[i]-97+key)% 26 +65;
			cypher=(char)(cypherValue);
			printf("%c", cypher);
		}else{
			printf("%c", plainText[i]);
		}
		i++;
	}
	printf("\n");
}
void dekripsi(char* cipherText, int key){
	int i=0;
	int cypherValue;
	char cypher;
	while(cipherText [i] != '\0' && strlen(cipherText)-1>i){
		if(cipherText[i]!=' '){
			cypherValue = ((int)cipherText[i]-65-key)% 26 +97;
			cypher=(char)(cypherValue);
			printf("%c", cypher);
		}else{
			printf("%c", cipherText[i]);
		}
		i++;
	}
	printf("\n");
}

	
