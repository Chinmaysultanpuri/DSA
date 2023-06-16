#include<stdio.h>

main()
{
        char str1[100];
        int L;
        printf("enter a string\n");
        gets(str1);
        printf("the string is\n");
        puts(str1);

        L=strlen(str1);
        printf("length of %s=%d\n",str1,L);
}