#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

//fungsi prototype
void out();
void tampil();
FILE *kamuskata;//pointer kata kamuskata

//fungsi utama
int main (){
	int pilih;
	printf("\t\t\t+================================================+\n");
    printf("\t\t\t|          WELCOME TO PALINDROM PROGRAM          |\n");
    printf("\t\t\t+================================================+\n");
	printf("\t\t\t+================================================+\n");
    printf("\t\t\t|         1. Checking Palindrom word             |\n");
    printf("\t\t\t|         2. History of Word List                |\n");
    printf("\t\t\t|         3. Exit Program                        |\n");
    printf("\t\t\t+================================================+\n");
    printf("\t\t\t\nEnter the menu of your choice [1][2][3] : ");
    scanf("%d",&pilih);
    system ("cls");

    //fungsi switch case
    switch (pilih){
    	case 1 :
    		tentukan_palindrom();
    		break;
    	case 2 :
    		daftar_palindrom();
    		break;
    	case 3 :
    		out();
    		break;
    	default :
    		printf("Enter the Correct Menu!!!\n\n");
		getchar();
    		system("pause");
    		main();
	}
	
}

void out(){
	printf("\t\t\t+================================================+\n");
    printf("\t\t\t|          THANK FOR USING THIS PROGRAM          |\n");
    printf("\t\t\t+================================================+\n");
    exit(0);
}

//Menu Tambahan 
void tampil(){
	int pilih; 
    printf("\n\n==============================================\n");
    printf("|                  1.Replay Input            |\n");
    printf("|                  2.History Of Word List    |\n");
    printf("|                  3.Menu                    |\n");
    printf("|                  4.Out Program             |\n");
    printf("==============================================\n");
    printf("Enter the menu[1][2][3] : ");
    scanf("%d",&pilih);
    system("cls");
    switch(pilih){
	    case 1:
        	tentukan_palindrom();
	    	break;
	    case 2:
	   		daftar_palindrom();
	    	break;
	    case 3:
	    	main();
	    	break;
	    case 4:
	    	out();
	    	break;
	    default:
	    	printf("Enter the correct menu!!!\n\n");
    		system("pause");
    		tampil();
	    	break;
    }
}

//palindrom
char *palindrom(char x[]){
	int i,n=0;
	int p = strlen(x); //strlen > mencari panjang yang ada pada string
	char y[p];
	int p1=p;
	
	for(i=0;i<p1;i++){//mencari tahu maksud fungsi dari for..
		y[i]=x[p-1];
		p--;
	}
    for(i=0;i<p1;i++){
        if(y[i]!=x[i]){
            n=1;
        }
    }
	if(n==0){
		return("Palindrom");
	}
	else{
		return ("Bukan Palindrom");
	}
}

//kamus teks kata
void kata(char x[]){ //f open berfungsi untuk membuka file
	kamuskata=fopen("kamuskata.txt","a+"); //a+ buat baru atau tulis ulang jika ada
	int i, k, count[100];
	int jumlahkata;
	bool isSame;
	int p= strlen(x);

	for(i=0;i< p;i++){
		count[i]=0;
		for(k=0;k<p;k++){
			if (x[i]==x[k]){
				count[i]++;
			}
		}
	}
	printf("==============================================\n\n");
	jumlahkata=strlen(x);
	printf("Kata\t\t= %s(%d)",x,jumlahkata);
	fprintf(kamuskata, "Kata\t\t : %s(%d) \nJumlah huruf\t : ",x,jumlahkata);
	printf("\nJumlah Huruf\t= ");
	for(i=0;i<p;i++){
		isSame=false;
		for(k=i-1;k>=0;k--){
			if (x[i]==x[k]){
				isSame=true;
				break;
			}
		}
		if(!isSame){
            if(x[i]==' '){

            }else{
			printf("%c=%d ",x[i],count[i]);
			fprintf(kamuskata,"%c=%d ",x[i],count[i]);
            }
		}
	}
	printf("\nKeterangan\t= %s",palindrom(x));
	fprintf(kamuskata,"\n>>> %s <<<\n\n",palindrom(x));
	fclose(kamuskata);
} 

int tentukan_palindrom(){
    int cek;
	char str[100];

    printf("==============================================\n");
    printf("|          Checking Palindrom Word           |\n");
    printf("==============================================\n\n");
    printf("Input Word : ");
    fflush(stdin);
    scanf("%[^\n]", &str);

    cek = validasi(str);
    while(cek == 0){
    	system ("cls");
        printf("Enter the correct input! \n");
        tentukan_palindrom();
        fflush(stdin);
        scanf("%[^\n]", &str);
        cek = validasi(str);
    }

    printf("\n");
    kata(str);
    tampil();
}

int daftar_palindrom(){
    int pilih;
    char buff[255];
    FILE *fptr;

    printf("==============================================\n");
    printf("|             List Word History              |\n");
    printf("==============================================\n\n");
    printf("List Word History : \n\n");
    fflush(stdin);

    if ((fptr = fopen("kamuskata.txt","r")) == NULL){  //membuka file
        printf("Error : File not available!");
        exit(1);
    }
    while(fgets(buff, sizeof(buff), fptr)){ //mengambil input dari user
        printf("%s", buff);
    }
    tampil();
}

//Character Validation
int validasi(char masukan[]){
    int i = 0;
    int salah = 0;

    while(masukan[i] != '\0'){
        if((masukan[i] >= 65 && masukan[i] <= 90) || (masukan[i] >= 97 && masukan[i] <= 122) || masukan[i] == ' '){
            i++;
        }else{
            salah = 1;
            masukan[i] = '\0';
        }
    }
    if(salah == 1){
        return 0;
    }else{
        return 1;
    }
}

