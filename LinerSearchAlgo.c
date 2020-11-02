#include<stdio.h>

//Liner Search Algorithm.
/*
 * 	Linear search is the simplest search algorithm and often called sequential search.
 * 	In this type of searching, we simply traverse the list completely and match each element of
 * 	the list with the item whose location is to be found. If the match found then location of
 * 	the item is returned otherwise the algorithm return NULL.
	Linear search is mostly used to search an unordered list in which the items are not sorted.
	The algorithm of linear search is given as follows.
 */


int main(){

	int array[10] = { 2, 34, 56, 23, 65, 21, 67, 99, 45, 62 };
	int flag, item, i;

	printf("Enter Item which you want to search\n");
	scanf("%d" , &item);

	for(int i = 0 ; i < 10 ; i++){
		if( array[i] == item){
			flag = i+1;
			break;
		}
		else{
			flag=0;
		}
	}
		if(flag!=0){
			printf("Item found at postion %d\n" , flag);
		}
		else{
			printf("\nItem Not Found\n");

		}


return 0;
}
