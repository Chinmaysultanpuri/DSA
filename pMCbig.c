#include<stdio.h>
main()
{
    int a, b, *ap = &a, *bp = &b;
    printf("Enter any two numbers : \n");
    scanf("%d%d", ap, bp);
    void com(int *i, int *o);
    com(ap, bp);
}

void com(int *i, int *o)
{
    if(*i>*o)
    {
        printf("Big num = %d", *i);
    }
    else
    {
        printf("Big num = %d", *o);
    }
}