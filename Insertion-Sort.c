//Insertion-Sort
#include<stdio.h>

void printer(int vetor[], int size){
    for(int i = 0; i < size; i++){
	    printf("%d ", vetor[i]);
	}
	printf("\n \n");
}

int main()
{
    /*Printing before sorting*/
	int vetor[10] = {10, 8, 7, 5, 4, 6, 2, 3, 1, 9};
	int size = (int) (sizeof(vetor) / sizeof(vetor[0]));
	printf("** Before Sorting **\n");
	printer(vetor, size);
	
	/*INSERTION SORT*/
	int key, before;
	for(int i = 1; i < size; i++){
	    key = vetor[i];
	    before = i - 1;
	    while(before > -1 && vetor[before] > key){
	        vetor[before + 1] = vetor[before];
	        before--;
	    }
	    vetor[before + 1] = key;
	}
	
	/*Printing after sorting*/
	printf("** After Sorting **\n");
	printer(vetor, size);
	
	return 0;
}
