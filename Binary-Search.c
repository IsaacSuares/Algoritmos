//Binary-Search
#include<stdio.h>

int binarySearch(int vetor[], int size, int value){
    int left, right, center;
	left = 0;
	right = size - 1;
	while(left <= right){
	    center = left + (right - left) /2;
	    if(vetor[center] == value){
	        return center;
	    }if(value > vetor[center]){
	        left = center + 1;
	    }else if(value < vetor[center]){
	        right = center - 1;
	    }
	}
}
	
int main()
{
    /****************0  1  2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23**/
	int vetor[24] = {1, 3, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	int size = (int) (sizeof(vetor) / sizeof(vetor[0]));
	
	printf(" Element %d founded on index %d", vetor[binarySearch(vetor, size, 43)], binarySearch(vetor, size, 43));
	return 0;
}
