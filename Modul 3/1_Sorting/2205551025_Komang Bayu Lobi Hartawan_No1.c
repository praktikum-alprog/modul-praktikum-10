#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DATA_1K 1000
#define DATA_16K 16000
#define DATA_64K 64000
void binary();
int BinarySearch(int *data, int x, int jumlah_data);
void bubbleSort(int *array, int size);

void buble_sort(int data_angka[],int jumlah_data);
void insertion_sort(int data_angka[], int jumlah_data);
void quicksort(int data_angka[],int first,int last);
void sequen();

int main(){
   int data_angka[DATA_1K], t, i, j;
   int data_angka1[DATA_16K];
   int data_angka2[DATA_64K];
   int x,angka[DATA_1K];
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
   	    	if(t==1){
   	    		buble_sort(data_angka, DATA_1K);
   	    		printf ("Apakah anda ingin mengulang?\n");
   	    	   	printf ("Jawab y/t\n");
   	    	   	scanf(" %c", &pilih);
   	    		break;
			   }else if(t==2){
			   	buble_sort(data_angka1, DATA_16K);
			   	printf ("Apakah anda ingin mengulang?\n");
   	    	   	printf ("Jawab y/t\n");
   	    	   	scanf(" %c", &pilih);
			   	break;
			   }else{
			   	buble_sort(data_angka2, DATA_64K);
			   	printf ("Apakah anda ingin mengulang?\n");
   	    	   	printf ("Jawab y/t\n");
   	    	   	scanf(" %c", &pilih);
			   	break;
			   }
   			break;
   		case 2:
	   		printf("Pilih Jumlah Data Yang Ingin di Sorting\n1.1000\n2.16000\n3.64000\n");
   	        scanf("%d", &t);
   	        if(t==1){
   	    		insertion_sort(data_angka, DATA_1K);
   	    		printf ("Apakah anda ingin mengulang?\n");
   	    	   	printf ("Jawab y/t\n");
   	    	   	scanf(" %c", &pilih);
   	    		break;
			   }else if(t==2){
			   	insertion_sort(data_angka1, DATA_16K);
			   	printf ("Apakah anda ingin mengulang?\n");
   	    	   	printf ("Jawab y/t\n");
   	    	   	scanf(" %c", &pilih);
			   	break;
			   }else{
			   	insertion_sort(data_angka2, DATA_64K);
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
					for (i=0; i<DATA_1K; i++)
					data_angka[i] = rand();
					printf("Data sebelum disortir...\n");
				    printf("-----------------------------------------------------");
				    for (i=0; i<DATA_1K; i++){
		    	      if (i==0) printf("\n");
					    printf(" %5d \t", data_angka[i]);
					}
					quicksort(data_angka, 0, DATA_1K-1);
					printf("\n Hasil Pengurutan: \n");
					for(i=0;i<DATA_1K;i++){
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
						for (i=0; i<DATA_16K; i++)
						data_angka1[i] = rand();
						printf("Data sebelum disortir...\n");
					    printf("-----------------------------------------------------");
					    for (i=0; i<DATA_16K; i++){
					      if (i==0) printf("\n");
					      printf(" %d \t", data_angka1[i]);
						}
						quicksort(data_angka1, 0, DATA_16K-1);
						printf("\n Hasil Pengurutan: \n");
						for(i=0;i<DATA_16K;i++){
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
						for (i=0; i<DATA_64K; i++)
						data_angka2[i] = rand();			
						printf("Data sebelum disortir...\n");
						printf("-----------------------------------------------------");
						for (i=0; i<DATA_64K; i++){
						    if (i==0) printf("\n");
						    printf(" %d \t", data_angka2[i]);
						}	
					    quicksort(data_angka2, 0, DATA_64K-1);
					    printf("\n Hasil Pengurutan: \n");
						for(i=0;i<DATA_64K;i++){
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
			if(t==1){
   	    		sequen(data_angka, DATA_1K);
   	    		printf ("Apakah anda ingin mengulang?\n");
   	    	   	printf ("Jawab y/t\n");
   	    	   	scanf(" %c", &pilih);
   	    		break;
			   }else if(t==2){
			   	sequen(data_angka1, DATA_16K);
			   	printf ("Apakah anda ingin mengulang?\n");
   	    	   	printf ("Jawab y/t\n");
   	    	   	scanf(" %c", &pilih);
			   	break;
			   }else{
			   	sequen(data_angka2, DATA_64K);
			   	printf ("Apakah anda ingin mengulang?\n");
   	    	   	printf ("Jawab y/t\n");
   	    	   	scanf(" %c", &pilih);
			   	break;
			   }
					break;
		case 5:
			printf("Pilih Jumlah Data Yang Ingin di Searching\n1.1000\n2.16000\n3.64000\n");
			scanf("%d", &t);
			if(t==1){
   	    		binary(data_angka, DATA_1K);
   	    		printf ("Apakah anda ingin mengulang?\n");
   	    	   	printf ("Jawab y/t\n");
   	    	   	scanf(" %c", &pilih);
   	    		break;
			   }else if(t==2){
			   	binary(data_angka1, DATA_16K);
			   	printf ("Apakah anda ingin mengulang?\n");
   	    	   	printf ("Jawab y/t\n");
   	    	   	scanf(" %c", &pilih);
			   	break;
			   }else{
			   	binary(data_angka2, DATA_64K);
			   	printf ("Apakah anda ingin mengulang?\n");
   	    	   	printf ("Jawab y/t\n");
   	    	   	scanf(" %c", &pilih);
			   	break;
			   }
				break;	
    	}
	}while(pilih=='y');
	printf("Terimakasih");
}
void buble_sort(int data_angka[],int jumlah_data){
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

void insertion_sort(int data_angka[], int jumlah_data){
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

void quicksort(int data_angka[DATA_1K],int first,int last){
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

void sequen(int data[], int jumlah_data){
	int cari, i, n;
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

void binary(int data[], int jumlah_data){
	int cari, i, n, index_ditemukan,z, index[jumlah_data];
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
	for(i=0; i<=jumlah_data; i++){
	  	if(data[i]==cari){
	  		index[z]=i;
	  		z++;
	 	}
	}
	index_ditemukan = BinarySearch(data, cari, jumlah_data);
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

int BinarySearch(int data[], int x, int jumlah_data){
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
