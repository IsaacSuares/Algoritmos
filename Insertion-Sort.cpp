//Insertion-Sort
#include<iostream>

using namespace std;

int size(int vetor[]){
	int cont = 0;
	while(vetor[cont]){
		cont++;
	}
	return cont - 3;
}

int main()
{
    int key, before;
	int vetor[10] = {10, 8, 7, 5, 4, 6, 2, 3, 1, 9};
	for(int i = 1; i < size(vetor); i++){
	    key = vetor[i];
	    before = i - 1;
	    while(before > -1 && vetor[before] > key){
	        vetor[before + 1] = vetor[before];
	        before--;
	    }
	    vetor[before + 1] = key;
	}

    for(int i = 0; i < size(vetor); i++){
        cout << vetor[i] << " ";
    }
    
}
