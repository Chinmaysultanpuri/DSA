#include<stdio.h>
main()
{
    int p, t, r, *pp = &p, *pt = &t, *pr = &r;
    printf("Enter P ,T, R : \n");
    scanf("%d%d%d", pp, pt, pr);
    void si(int *a, int *b, int *c);
    si(pp, pt, pr);
}

void si(int *a, int *b, int *c)
{
    printf("SI = %0.2f",(*a * *b * *c)/100.0);
}