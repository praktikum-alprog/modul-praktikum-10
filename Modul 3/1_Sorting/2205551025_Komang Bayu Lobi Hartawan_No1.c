#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define jumlah_data 1000
#define jumlah_data1 16000
#define jumlah_data2 64000
void binary();
int BinarySearch(int *data, int x);
void bubbleSort(int *array, int size);

void binary1();
int BinarySearch1(int *data, int x);
void bubbleSort(int *array, int size);

void binary2();
int BinarySearch2(int *data, int x);
void bubbleSort(int *array, int size);

void buble_sort(int data_angka[]);
void buble_sort1(int data_angka[]);
void buble_sort2(int data_angka[]);

void insertion_sort(int data_angka[]);
void insertion_sort1(int data_angka[]);
void insertion_sort2(int data_angka[]);

void quicksort(int data_angka[],int first,int last);

void sequen();
void sequen1();
void sequen2();
int main(){
   int data_angka[jumlah_data], t, i, j;
   int data_angka1[jumlah_data1];
   int data_angka2[jumlah_data2];
   int x,angka[jumlah_data];
   int pilihan;
   int pilih='y';
   do{
	system("cls");
    printf ("===================================\n");
	printf ("||           MENU PILIHAN        ||\n");
	printf ("===================================\n\n");
	printf ("\t  MODE SORTING DATA\n");
	printf ("===================================\n");
	printf ("||       1. BUBBLE SORT          ||\n");
	printf ("||       2. INSERTION SORT       ||\n");
	printf ("||       3. QUICK SORT           ||\n");
	printf ("===================================\n\n");
	printf ("\t  MODE SEARCHING DATA\n");
	printf ("===================================\n");
	printf ("||       4. SEQUENTIAL SEARCH    ||\n");
	printf ("||       5. BINARY SEARCH        ||\n");
	printf ("===================================\n\n");
	printf ("MASUKAN MENU PILIHAN ->", pilihan);
    scanf("%d", &pilihan);
	
   switch(pilihan){
   		case 1:
   	    	printf("Pilih Jumlah Data Yang Ingin di Sorting\n1.1000\n2.16000\n3.64000\n");
   	    	scanf("%d", &t);
   	    	switch(t){
   	    	   	case 1:
   	    	   		buble_sort(data_angka);
   	    	   		printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
   	    	   		break;
   	    	   	case 2:
   	    	   		buble_sort1(data_angka1);
   	    	   		printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
   	    	   		break;
   	    	   	case 3:
   	    	   		buble_sort2(data_angka2);
   	    	   		printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
   	    	   		break;
				}
   		    	break;
   			
   		case 2:
	   		printf("Pilih Jumlah Data Yang Ingin di Sorting\n1.1000\n2.16000\n3.64000\n");
   	        scanf("%d", &t);
   	        switch(t){
   	    	    case 1:
   	    	    	insertion_sort(data_angka);
   	    	    	printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
   	    	    	break;
   	    	    case 2: 
   	    	    	insertion_sort1(data_angka1);
   	    	    	printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
   	    	    	break;
   	    	    case 3:
   	    	    	insertion_sort2(data_angka2);
   	    	    	printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
   	    	    	break;
				}
		        break;
		        
		case 3:
			printf("Pilih Jumlah Data Yang Ingin di Sorting\n1.1000\n2.16000\n3.64000\n");
   	        scanf("%d", &t);
   	   	    	if(t==1){
   	   	    		clock_t r;
   					r = clock();
   	   	    		srand(time(NULL));
					for (i=0; i<jumlah_data; i++)
					data_angka[i] = rand();
					printf("Data sebelum disortir...\n");
				    printf("-----------------------------------------------------");
				    for (i=0; i<jumlah_data; i++){
		    	      if (i==0) printf("\n");
					    printf(" %5d \t", data_angka[i]);
					}
					quicksort(data_angka, 0, jumlah_data-1);
					printf("\n Hasil Pengurutan: \n");
					for(i=0;i<jumlah_data;i++){
						printf(" %5d \t",data_angka[i]);
					}
					printf("\n");
					r = clock() - r;
					printf("\n-----------------------------------------------------\n");
				   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
				    printf("Waktu Eksekusi %f \n", time_taken);
				    printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
				   	break;
					}
   	   	    		else if(t==2){
   	   	    			clock_t r;
   						r = clock();
   	   	    			srand(time(NULL));
						for (i=0; i<jumlah_data1; i++)
						data_angka1[i] = rand();
						printf("Data sebelum disortir...\n");
					    printf("-----------------------------------------------------");
					    for (i=0; i<jumlah_data1; i++){
					      if (i==0) printf("\n");
					      printf(" %d \t", data_angka1[i]);
						}
						quicksort(data_angka1, 0, jumlah_data1-1);
						printf("\n Hasil Pengurutan: \n");
						for(i=0;i<jumlah_data1;i++){
							printf(" %d \t",data_angka1[i]);
						}
						printf("\n");
						r = clock() - r;
						printf("\n-----------------------------------------------------\n");
					   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
					    printf("Waktu Eksekusi %f \n", time_taken);
					    printf ("Apakah anda ingin mengulang?\n");
	   	    	   		printf ("Jawab y/t\n");
	   	    	   		scanf(" %c", &pilih);
						break;
					}
			    	else if(t==3){
			    		clock_t r;
   						r = clock();
			    		srand(time(NULL));
						for (i=0; i<jumlah_data2; i++)
						data_angka2[i] = rand();			
						printf("Data sebelum disortir...\n");
						printf("-----------------------------------------------------");
						for (i=0; i<jumlah_data2; i++){
						    if (i==0) printf("\n");
						    printf(" %d \t", data_angka2[i]);
						}	
					    quicksort(data_angka2, 0, jumlah_data2-1);
					    printf("\n Hasil Pengurutan: \n");
						for(i=0;i<jumlah_data2;i++){
							printf(" %d \t",data_angka2[i]);
						}
						printf("\n");
						r = clock() - r;
						printf("\n-----------------------------------------------------\n");
					   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
					    printf("Waktu Eksekusi %f \n", time_taken);
					    printf ("Apakah anda ingin mengulang?\n");
	   	    	   		printf ("Jawab y/t\n");
	   	    	   		scanf(" %c", &pilih);
						break;
					}
		case 4 :
			printf("Pilih Jumlah Data Yang Ingin di Searching\n1.1000\n2.16000\n3.64000\n");
			scanf("%d", &t);
			switch(t){
			   	case 1:
					sequen(data_angka);
					printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
					break;
				case 2:
					sequen1(data_angka1);
					printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
					break;
				case 3:
					sequen2(data_angka2);
					printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
					break;
			}
					break;
		case 5:
			printf("Pilih Jumlah Data Yang Ingin di Searching\n1.1000\n2.16000\n3.64000\n");
			scanf("%d", &t);
			switch(t){
				case 1:
					binary();
					printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
					break;
				case 2:
					binary1();
					printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
					break;
				case 3:
					binary2();
					printf ("Apakah anda ingin mengulang?\n");
   	    	   		printf ("Jawab y/t\n");
   	    	   		scanf(" %c", &pilih);
					break;
			}			
    	}
	}while(pilih=='y');
	printf("Terimakasih");
}
void buble_sort(int data_angka[]){
    int t, i, j;
    clock_t r;
   	r = clock();
   //data acak
	srand(time(NULL));
	for (i=0; i<jumlah_data; i++)
    data_angka[i] = rand();
	//tampilkan data sebelum disortir
	printf("Data sebelum disortir...\n");
	printf("-----------------------------------------------------");
	for (i=0; i<jumlah_data; i++){
	    if (i==0) printf("\n");
		printf("%5d \t", data_angka[i]);
		}
	//tampilkan data setelah diurutkan
	printf("\n\nData setelah disortir...\n");
	printf("-----------------------------------------------------");
	for (i=0; i<jumlah_data-1; i++){
		for (j=i+1; j<jumlah_data; j++){
		if (data_angka[i] > data_angka[j]){
			t = data_angka[i];
				data_angka[i] = data_angka[j];
				data_angka[j] = t;
			}
		}
   }
	for (i=0; i<jumlah_data; i++){
		if (i==0) printf("\n");
		printf("%5d \t", data_angka[i]);
	}
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Ekskusi %f  \n", time_taken);
}
void buble_sort1(int data_angka[]){
    int t, i, j;
    clock_t r;
   	r = clock();
   //data acak
	srand(time(NULL));
	for (i=0; i<jumlah_data1; i++)
    data_angka[i] = rand();
	//tampilkan data sebelum disortir
	printf("Data sebelum disortir...\n");
	printf("-----------------------------------------------------");
	for (i=0; i<jumlah_data1; i++){
	    if (i==0) printf("\n");
		printf("%5d \t", data_angka[i]);
		}
	//tampilkan data setelah diurutkan
	printf("\n\nData setelah disortir...\n");
	printf("-----------------------------------------------------");
	for (i=0; i<jumlah_data1-1; i++){
		for (j=i+1; j<jumlah_data1; j++){
		if (data_angka[i] > data_angka[j]){
			t = data_angka[i];
				data_angka[i] = data_angka[j];
				data_angka[j] = t;
			}
		}
   }
	for (i=0; i<jumlah_data1; i++){
		if (i==0) printf("\n");
		printf("%5d \t", data_angka[i]);
	}
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Eksekusi %f \n", time_taken);
}
void buble_sort2(int data_angka[]){
    int t, i, j;
    clock_t r;
   	r = clock();
   //data acak
	srand(time(NULL));
	for (i=0; i<jumlah_data2; i++)
    data_angka[i] = rand();
	//tampilkan data sebelum disortir
	printf("Data sebelum disortir...\n");
	printf("-----------------------------------------------------");
	for (i=0; i<jumlah_data2; i++){
	    if (i==0) printf("\n");
		printf("%5d \t", data_angka[i]);
		}
	//tampilkan data setelah diurutkan
	printf("\n\nData setelah disortir...\n");
	printf("-----------------------------------------------------");
	for (i=0; i<jumlah_data2-1; i++){
		for (j=i+1; j<jumlah_data2; j++){
		if (data_angka[i] > data_angka[j]){
			t = data_angka[i];
				data_angka[i] = data_angka[j];
				data_angka[j] = t;
			}
		}
   }
	for (i=0; i<jumlah_data2; i++){
		if (i==0) printf("\n");
		printf("%5d \t", data_angka[i]);
	}
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Eksekusi %f \n", time_taken);
}

void insertion_sort(int data_angka[]){
	int i, j, t;
	clock_t r;
   	r = clock();
    srand(time(NULL));
	for (i=0; i<jumlah_data; i++)
	data_angka[i] = rand();
	//tampilkan data sebelum disortir
	printf("Data sebelum disortir...\n");
	printf("-----------------------------------------------------");
	for (i=0; i<jumlah_data; i++){
		if (i==0) printf("\n");
		printf(" %d \t", data_angka[i]);
	}     
	for(i = 1; i <= jumlah_data-1; i++){
        for(j = i; j > 0 && data_angka[j - 1] > data_angka[j]; j--){
            t = data_angka[j];
            data_angka[j] = data_angka[j - 1];
            data_angka[j-1] = t;
        }
    }
	printf("\n Hasil pengurutan :\n ");
	for(i = 0; i < jumlah_data; i++){
		printf(" %d \t",data_angka[i]);
	}
	printf("\n");
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Eksekusi %f \n", time_taken);
}
void insertion_sort1(int data_angka[]){
	int i, j, t;
	clock_t r;
   	r = clock();
    srand(time(NULL));
	for (i=0; i<jumlah_data1; i++)
	data_angka[i] = rand();
	//tampilkan data sebelum disortir
	printf("Data sebelum disortir...\n");
	printf("-----------------------------------------------------");
	for (i=0; i<jumlah_data1; i++){
		if (i==0) printf("\n");
		printf(" %d \t", data_angka[i]);
	}     
	for(i = 1; i <= jumlah_data1-1; i++){
        for(j = i; j > 0 && data_angka[j - 1] > data_angka[j]; j--){
            t = data_angka[j];
            data_angka[j] = data_angka[j - 1];
            data_angka[j-1] = t;
        }
    }
	printf("\n Hasil pengurutan :\n ");
	for(i = 0; i < jumlah_data1; i++){
		printf(" %d \t",data_angka[i]);
	}
	printf("\n");
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Eksekusi %f \n", time_taken);
}
void insertion_sort2(int data_angka[]){
	int i, j, t;
	clock_t r;
   	r = clock();
    srand(time(NULL));
	for (i=0; i<jumlah_data2; i++)
	data_angka[i] = rand();
	//tampilkan data sebelum disortir
	printf("Data sebelum disortir...\n");
	printf("-----------------------------------------------------");
	for (i=0; i<jumlah_data2; i++){
		if (i==0) printf("\n");
		printf(" %d \t", data_angka[i]);
	}     
	for(i = 1; i <= jumlah_data2-1; i++){
        for(j = i; j > 0 && data_angka[j - 1] > data_angka[j]; j--){
            t = data_angka[j];
            data_angka[j] = data_angka[j - 1];
            data_angka[j-1] = t;
        }
    }
	printf("\n Hasil pengurutan :\n ");
	for(i = 0; i < jumlah_data2; i++){
		printf(" %d \t",data_angka[i]);
	}
	printf("\n");
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Eksekusi %f \n", time_taken);
}

void quicksort(int data_angka[jumlah_data],int first,int last){
	int i, j, pivot, temp;
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		while(i<j){
		   while(data_angka[i]<=data_angka[pivot]&&i<last)
		   i++;
		   while(data_angka[j]>data_angka[pivot])
		   j--;
		      if(i<j){
		        temp=data_angka[i];
		        data_angka[i]=data_angka[j];
		        data_angka[j]=temp;
		    }
		}
		temp=data_angka[pivot];
		data_angka[pivot]=data_angka[j];
		data_angka[j]=temp;
		quicksort(data_angka,first,j-1);
		quicksort(data_angka,j+1,last);
	}
		
}

void sequen(){
	int data[jumlah_data], cari, i, n;
	int a,x,z,index[jumlah_data];
	clock_t r;
   	r = clock();
	srand(time(NULL));
  	for (a=1;a<jumlah_data+1;a++){
  		x=rand();
  		data[a]=x;
  		printf ("Bilangan Random[index-%d] : %d\n\n",a, data[a]);
	}
	printf("Input data yang ingin dicari: ");
	scanf("%d", &cari);
	z=0;
	for(i=0; i<=jumlah_data; i++){
	  	if(data[i]==cari){
	  		index[z]=i;
	  		z++;
	 	}
	}
	for (i = 0; i <= jumlah_data; i++) {
    	if (data[i] == cari) {
     		printf("%d dengan jumlah data %d", cari, z);
			for (i=0;i<z;i++){
      			printf("\nData tersebut berada di index ke-%d",index[i]);
	  		}
    	break;
    	}
	}
	if (i ==jumlah_data){
		printf("%d tidak ada.\n", cari);
	}
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Eksekusi %f \n", time_taken);
}
void sequen1(){
	int data[jumlah_data1], cari, i, n;
	int a,x,z,index[jumlah_data1];
	clock_t r;
   	r = clock();
	srand(time(NULL));
  	for (a=1;a<jumlah_data1+1;a++){
  		x=rand();
  		data[a]=x;
  		printf ("Bilangan Random[index-%d] : %d\n\n",a, data[a]);
	}
	printf("Input data yang ingin dicari: ");
	scanf("%d", &cari);
	z=0;
	for(i=0; i<=jumlah_data1; i++){
	  	if(data[i]==cari){
	  		index[z]=i;
	  		z++;
	 	}
	}
	for (i = 0; i <= jumlah_data1; i++) {
    	if (data[i] == cari) {
     		printf("%d dengan jumlah data %d", cari, z);
			for (i=0;i<z;i++){
      			printf("\nData tersebut berada di index ke-%d",index[i]);
	  		}
    	break;
    	}
	}
	if (i ==jumlah_data1){
		printf("%d tidak ada.\n", cari);
	}
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Eksekusi %f \n", time_taken);
}
void sequen2(){
	int data[jumlah_data2], cari, i, n;
	int a,x,z,index[jumlah_data2];
	clock_t r;
   	r = clock();
	srand(time(NULL));
  	for (a=1;a<jumlah_data2+1;a++){
  		x=rand();
  		data[a]=x;
  		printf ("Bilangan Random[index-%d] : %d\n\n",a, data[a]);
	}
	printf("Input data yang ingin dicari: ");
	scanf("%d", &cari);
	z=0;
	for(i=0; i<=jumlah_data2; i++){
	  	if(data[i]==cari){
	  		index[z]=i;
	  		z++;
	 	}
	}
	for (i = 0; i <= jumlah_data2; i++) {
    	if (data[i] == cari) {
     		printf("%d dengan jumlah data %d", cari, z);
			for (i=0;i<z;i++){
      			printf("\nData tersebut berada di index ke-%d",index[i]);
	  		}
    	break;
    	}
	}
	if (i ==jumlah_data2){
		printf("%d tidak ada.\n", cari);
	}
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Eksekusi %f \n", time_taken);
}
void binary(){
	int data[jumlah_data], cari, i, n, index_ditemukan,z, index[1000];
	clock_t r;
   	r = clock();
	srand(time(NULL));
	printf("\nPembangkit bilangan acak (array belum terurut):\n\n");	
  	for(i = 0; i < jumlah_data; i++){
  		data[i]=rand();
  		printf("Bilangan Random[index-%d] : %d\n\n",i, data[i]);
	}
	//Pengurutan array 
	bubbleSort(data, jumlah_data);
	printf("\n\nArray yang telah terurut :\n\n");
	for(i = 0; i < jumlah_data; i++){
  		printf ("Bilangan Random[index-%d] : %d\n\n",i, data[i]);		
	}
	
	printf("\nInput data yang ingin dicari: ");
	scanf("%d", &cari);
	
	z=0;
	for(i=0; i<=1000; i++){
	  	if(data[i]==cari){
	  		index[z]=i;
	  		z++;
	 	}
	}
	index_ditemukan = BinarySearch(data, cari);
	printf("\nDengan Jumlah Data : %d\n",z);
	if(index_ditemukan >= 0){
		for (i=0;i<z;i++){
			printf("\nData tersebut berada di index ke-%d\n",index[i]);
		}
	}
	else{
		printf("\nData tidak ditemukan pada array.\n");
	}
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Eksekusi %f \n", time_taken);
}
void binary1(){
	int data[jumlah_data1], cari, i, n, index_ditemukan,z, index[16000];
	clock_t r;
   	r = clock();
	srand(time(NULL));
	printf("\nPembangkit bilangan acak (array belum terurut):\n\n");	
  	for(i = 0; i < jumlah_data1; i++){
  		data[i]=rand();
  		printf("Bilangan Random[index-%d] : %d\n\n",i, data[i]);
	}
	//Pengurutan array 
	bubbleSort(data, jumlah_data1);
	printf("\n\nArray yang telah terurut :\n\n");
	for(i = 0; i < jumlah_data1; i++){
  		printf ("Bilangan Random[index-%d] : %d\n\n",i, data[i]);		
	}
	
	printf("\nInput data yang ingin dicari: ");
	scanf("%d", &cari);
	
	z=0;
	for(i=0; i<=16000; i++){
	  	if(data[i]==cari){
	  		index[z]=i;
	  		z++;
	 	}
	}
	index_ditemukan = BinarySearch1(data, cari);
	printf("\nDengan Jumlah Data : %d\n",z);
	if(index_ditemukan >= 0){
		for (i=0;i<z;i++){
			printf("\nData tersebut berada di index ke-%d\n",index[i]);
		}
	}
	else{
		printf("\nData tidak ditemukan pada array.\n");
	}
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Eksekusi %f \n", time_taken);
}
void binary2(){
	int data[jumlah_data2], cari, i, n, index_ditemukan,z, index[1000];
	clock_t r;
   	r = clock();
	srand(time(NULL));
	printf("\nPembangkit bilangan acak (array belum terurut):\n\n");	
  	for(i = 0; i < jumlah_data2; i++){
  		data[i]=rand();
  		printf("Bilangan Random[index-%d] : %d\n\n",i, data[i]);
	}
	//Pengurutan array 
	bubbleSort(data, jumlah_data2);
	printf("\n\nArray yang telah terurut :\n\n");
	for(i = 0; i < jumlah_data2; i++){
  		printf ("Bilangan Random[index-%d] : %d\n\n",i, data[i]);		
	}
	
	printf("\nInput data yang ingin dicari: ");
	scanf("%d", &cari);
	
	z=0;
	for(i=0; i<=64000; i++){
	  	if(data[i]==cari){
	  		index[z]=i;
	  		z++;
	 	}
	}
	index_ditemukan = BinarySearch2(data, cari);
	printf("\nDengan Jumlah Data : %d\n",z);
	if(index_ditemukan >= 0){
		for (i=0;i<z;i++){
			printf("\nData tersebut berada di index ke-%d\n",index[i]);
		}
	}
	else{
		printf("\nData tidak ditemukan pada array.\n");
	}
	r = clock() - r;
	printf("\n-----------------------------------------------------\n");
   	double time_taken = ((double)r)/CLOCKS_PER_SEC; 
    printf("Waktu Eksekusi %f \n", time_taken);
}

void bubbleSort(int *array, int size){
	int step, i;	
	for (step = 0; step < size - 1; ++step) {
		for (i = 0; i < size - step - 1; ++i) {
	  		if (array[i] > array[i + 1]) {
			    int temp = array[i];
			    array[i] = array[i + 1];
			    array[i + 1] = temp;
	  		}
		}
	}
}

int BinarySearch(int data[], int x){ 
	int L = 0, R = jumlah_data-1, m, ketemu = 0; 
	while(L <= R){
		m = (L + R) / 2;
 		if(data[m] == x){
			return m;
		}else if(x > data[m]){
			L = m + 1;			
		}else{
			R = m - 1;
		}
 	}
 	return -1;
} 
int BinarySearch1(int data[], int x){ 
	int L = 0, R = jumlah_data1-1, m, ketemu = 0; 
	while(L <= R){
		m = (L + R) / 2;
 		if(data[m] == x){
			return m;
		}else if(x > data[m]){
			L = m + 1;			
		}else{
			R = m - 1;
		}
 	}
 	return -1;
} 
int BinarySearch2(int data[], int x){ 
	int L = 0, R = jumlah_data2-1, m, ketemu = 0; 
	while(L <= R){
		m = (L + R) / 2;
 		if(data[m] == x){
			return m;
		}else if(x > data[m]){
			L = m + 1;			
		}else{
			R = m - 1;
		}
 	}
 	return -1;
} 
