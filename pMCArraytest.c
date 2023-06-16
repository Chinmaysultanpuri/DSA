#include<stdio.h>

void r(float *p, int n);
void d(float *p, int n);
void s(float *p, int n);

main()
{
    float a[10], *p = a; int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    if(n<10 && n>0)
    {
        r(p, n);
        d(p, n);
        s(p, n);
    }
    else
        printf("Incorrect Input");
}

void r(float *p, int n)
{
    for(int i = 0; i < n; i++, p++)
        scanf("%f", p);
}
void d(float *p, int n)
{
    for(int i = 0; i < n; i++, p++)
        printf("%f ", *p);
}
void s(float *p, int n)
{
    float s = 0, *l = p;
    for(int i = 0; i < n; i++, l++)
    {
        s = *l + s;
    }
    printf("Sum = %f", s);
}

