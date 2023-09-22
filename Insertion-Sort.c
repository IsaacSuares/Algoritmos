//Insertion-Sort
#include<stdio.h>

int size(int vetor[]){
	int cont = 0;
	while(vetor[cont]){
		cont++;
	}
	return cont - 3;
}

void printer(int vetor[]){
    for(int i = 0; i < size(vetor); i++){
	    printf("%d ", vetor[i]);
	}
	printf("\n \n");
}

int main()
{
    /*Printing before sorting*/
	int vetor[10] = {10, 8, 7, 5, 4, 6, 2, 3, 1, 9};
	printf("** Before Sorting **\n");
	printer(vetor);
	
	/*INSERTION SORT*/
	int key, before;
	for(int i = 1; i < size(vetor); i++){
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
	printer(vetor);
	
	return 0;
}
