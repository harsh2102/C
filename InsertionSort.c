#include<stdio.h>

//Insertion Sort
	/*
	 * Insertion sort is the simple sorting algorithm which is commonly used in the daily lives
	 * while ordering a deck of cards.
	   In this algorithm, we insert each element onto its proper place in the sorted array.
	   This is less efficient than the other sort algorithms like quick sort, merge sort, etc.
	 */
void main(){

	int i, j, k, temp;
	int a[10] = { 56, 34, 76, 23, 73, 213, 766, 34, 77, 12 };

	printf("Printing sorted elements\t");
	for(k = 1; k<10; k++){
		temp = a[k];
		j = k-1;
		while(j>=0 && temp <=a[j]){
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
	for(i = 0; i<10; i++){
		printf("%d\t" , a[i]);
	}

}
