#include<stdio.h>

//Binary Search Alogorithm

/*
	Binary search is the search technique which works efficiently on the *sorted* lists.
	Hence, in order to search an element into some list by using binary search technique,
	we must ensure that the list is sorted.
	Binary search follows divide and conquer approach in which,
	the list is divided into two halves and the item is compared with the middle element of the list.
	If the match is found then, the location of middle element is returned otherwise,
	we search into either of the halves depending upon the result produced through the match.
 */

int binarySearch( int a[] , int beg , int end , int item){	//beg =10 end =9 item 430

	int mid;
	if( end >= beg){
		mid = (beg + end)/2;
		if(a[mid] == item){
			return mid + 1;
		}else if(a[mid] < item){
			return binarySearch( a , mid +1, end , item);
		}else{
			return binarySearch( a , beg , mid-1 , item);
		}
	}
	return 0;

}

int main(){

	int array[10] = { 2, 3, 43, 66, 76, 77, 90, 101, 122, 125 };
	int item , location = 0;
	puts("Enter number you want to search:");
	scanf("%d" , &item);
	location = binarySearch( array , 0 , 9 , item);

	if(location != 0){
		printf("Item found at postion : %d" , location );
	}
	else{
		printf("item not found");
	}

return 0;
}
