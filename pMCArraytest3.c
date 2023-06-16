#include<stdio.h>

void r(float *p, float n);
void d(float *p, float n);
void s(float *p, float n);

main()
{
    float a[10], *p = a, n;
    printf("Enter array size : ");
    scanf("%d", &n);
    if(n<10 && n>0)
    {
        r(p, n);
        d(p, n);
        s(p, n);
        d(p, n);
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
    float *ip = p, *jp, a; 
    for (int i = 0; i < n; i++, ip++) 
        {
            jp = ip + 1;
 
            for (int j = i + 1; j < n; j++, jp++)
            {
 
                if (*ip > *jp) 
                {
 
                    a =  *ip;
                    *ip = *jp;
                    *jp = a;
 
                }
 
            }
 
        }
}