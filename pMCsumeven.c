#include<stdio.h>

main()
{
    void ns(int *k);
    int n, *pn = &n;
    printf("Enter a number \n");
    scanf("%d", pn);
    ns(pn);
}

void ns(int *b)
{
    for(int i = 1; i < *b; i++)
    {
        if(i % 2 == 0)
        {
            printf(" %d", i);
        }
    }
    
}