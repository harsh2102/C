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
	printf("Enter the number of elements of the array");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array: ");
	for(i = 0; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}


	for(i = 0; i < n; i++){
		for(j = i+1; j < n-i-1 ; j++){
			if(arr[j] > a[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("The Sorted Elements are\t");
	for(int k =0; k<n; k++){
		printf("%d\t" , arr[k]);
	}
}
