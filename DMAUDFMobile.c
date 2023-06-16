#include<stdio.h>

struct m
{
    char cn[30];
    char m[30];
    int d;
}*p;

main()
{
    int n;

    printf("Enter number of phones : \n");
    scanf("%d", &n);

    p = (struct m *)malloc(n * sizeof(struct m));

    void read(struct m *p, int n);
    void display(struct m *p, int n);
    struct m * ch(struct m *p, int n);

    read(p, n);
    display(p, n);
    struct m *P = ch(p, n);

    printf("Company = %s \t Model = %s \t Price = %d \n", P->cn, P->m, P->d);
    free(p);
}

void read(struct m *p, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter details of %dth phone : \n", i+1);
        scanf("%s", p->cn);
        getchar();
        scanf("%s%d", p->m, &p->d);
        p++;
    }
}

void display(struct m *p, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Name = %s \t Model = %s \t Price = %d", p->cn, p->m, p->d);
        p++;
    }
}

struct m * ch(struct m *p, int n)
{
    float min = p->d;
    struct m *p1;
    for(int i = 0; i < n; i++)
    {
        if(min >= p->d)
        {
            min = p->d;
            p1 = p;
        }
        p++;
    }
    printf(" Lowest Price :  \n");
    return(p1);
}
