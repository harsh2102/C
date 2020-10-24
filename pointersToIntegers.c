#include<stdio.h>

int main(){

    int x=10;
    int* ptr;	//Pointer to integer ptr declaration.
    ptr = &x;	//Assigning address of x to the pointer to integer ptr.

    printf("The value of x = %d\n", x);

    printf("The address of x in the memory is &x = %d\n", &x);

    printf("The address of x in the memory is ptr = %d\n", ptr);

    printf("The Hexadecimal address of x is ptr = %x\n", ptr);	//The hexadecimal value is same as above
    															//integer value but it is in the Hexadecimal form.
    printf("Dereferancing x by using *ptr = %d\n", *ptr);

    return 0;
}
