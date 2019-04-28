//C program  to find a inputted character is vowel or consonant.

#include<stdio.h>
void main()
{ char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
      {
        printf("A vowel");
      }
    else
    {
       printf("A consonant");
    }

}
