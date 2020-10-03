#include <stdio.h>  
#include <math.h>  
#include <string.h>  
int main()  
{  
    char hex[17];                        // declaration of character array.  
    long long decimal, place;  
    int i = 0, val, len;                  // variables declaration  
    decimal = 0;  
   /* Input hexadecimal number from user */  
    printf("Enter any hexadecimal number: ");  
    gets(hex);  
/* Find the length of total number of hex digit */  
    len = strlen(hex);  
    len--;  
  
    /* 
     * Iterate over each hex digit 
     */  
    while(hex[i]!='\0')  
    {  
   
        /* To find the decimal representation of hex[i] */  
        if(hex[i]>='0' && hex[i]<='9')  
        {  
            val = hex[i] - 48;  
        }  
        else if(hex[i]>='a' && hex[i]<='f')  
        {  
            val = hex[i] - 97 + 10;  
        }  
        else if(hex[i]>='A' && hex[i]<='F')  
        {  
            val = hex[i] - 65 + 10;  
        }  
  
        decimal += val * pow(16, len); 
