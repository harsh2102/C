#include<stdio.h>

//Bubble Sort
/*
*	In Bubble sort, Each element of the array is compared with its adjacent element.
	The algorithm processes the list in passes.
	A list with n elements requires n-1 passes for sorting.
	Consider an array A of n elements whose elements are to be sorted by using Bubble sort.
	The algorithm processes like following.
	In Pass 1, A[0] is compared with A[1], A[1] is compared with A[2], A[2] is compared with A[3] and so on.
	At the end of pass 1, the largest element of the list is placed at the highest index of the list.
	In Pass 2, A[0] is compared with A[1], A[1] is compared with A[2] and so on.
	At the end of Pass 2 the second largest element of the list is placed at the second highest index of the list.
	In pass n-1, A[0] is compared with A[1], A[1] is compared with A[2] and so on. At the end of this pass.
	The smallest element of the list is placed at the first index of the list.
 */
void main(){

	int i, j, temp;
	int a[10] = { 56, 34, 76, 23, 73, 213, 766, 34, 77, 12 , 88};

	for(i = 0; i<10; i++){
		for(j = i+1; j<10; j++){
			if(a[j] < a[i]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("The Sorted Elements are\t");
	for(int k =0; k<10; k++){
		printf("%d\t" , a[k]);
	}
}
