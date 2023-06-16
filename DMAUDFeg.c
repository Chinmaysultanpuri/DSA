#include<stdio.h>
#include<stdlib.h>

struct s
{
    char n[30];
    int r;
    float h;
}*p;

main()
{
    void read(struct s *p, int d);
    void display(struct s *p, int d);
    struct s * h(struct s *p, int d);


    printf("Enter number of students: \n");
    int k;
    scanf("%d", &k);

    p = (struct s *)malloc(k * sizeof(struct s));

    read(p, k);
    display(p, k);
    struct s *p1 = h(p, k);

     printf("%s \t %d \t %f\n", p1->n, p1->r, p1->h);

    free(p);
}

void read(struct s *p, int d)
{
    for(int i = 0; i < d; i++)
    {
        printf("Enter details of the %dth student : \n", i+1);
        getchar();
        scanf("%s", &p->n);
        scanf("%d%f", &p->r, &p->h);
        p++;
    }
}

void display(struct s *p, int d)
{
    for(int i = 0; i < d; i++)
    {
        printf(" Details of the %dth student : \n", i+1);
        printf("%s \t %d \t %f\n", p->n, p->r, p->h);
        p++;
    }
}

struct s * h(struct s *p, int d)
{
    float min = p->h;
    struct s *p1;
    for(int i = 0; i < d; i++)
    {
        if(min >= p->h)
        {
            min = p->h;
            p1 = p;
        }
        p++;
    }
    printf(" Height of the smallest student:  \n");
    return(p1);

}