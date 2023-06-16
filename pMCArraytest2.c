#include<stdio.h>

void r(float *p, float n);
void d(float *p, float n);
void s(float *p, float n);

main()
{
    float a[10], *p = a, n;
    printf("Enter array size : ");
    scanf("%f", &n);
    if(n<10 && n>0)
    {
        r(p, n);
        d(p, n);
        p = a;
        s(p, n);
    }
    else
        printf("Incorrect Input");
}

void r(float *p, float n)
{
    for(int i = 0; i < n; i++, p++)
        scanf("%f", p);
}

void d(float *p, float n)
{
    for(int i = 0; i < n; i++, p++)
        printf("%f ", *p);
}

void s(float *p, float n)
{
    float max = *p;
    for(int i = 0; i < n; i++, p++)
    {
        if(*p>max)
            max = *p;
    }
    printf("Max Element = %f", max);
}