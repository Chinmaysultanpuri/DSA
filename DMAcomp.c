#include<stdio.h>
#include<stdlib.h>

struct s
{
    char n[30];
    int r;
    float h;
}*p, *o;

main()
{
    p = (struct s *) malloc(sizeof(struct s));
    o = (struct s *) malloc(sizeof(struct s));

    printf("Enter details of the first student. \n");
    scanf("%s%d%f", p->n, &p->r, &p->h);

    printf("Enter details of the second student. \n");
    scanf("%s%d%f", o->n, &o->r, &o->h);

    printf("Details of student whose height is more : \n");

    if(p->h > o->h)
        printf("%s \t %d \t %f", p->n, p->r, p->h);
    else
        printf("%s \t %d \t %f", o->n, o->r, o->h);

    free(o);
    free(p);

    return 0;
}