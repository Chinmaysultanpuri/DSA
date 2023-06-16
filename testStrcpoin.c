#include<stdio.h>

struct bro
{
    char na[20];
    int age;
    char gen;
}s, *p = &s;

main()
{
    printf("Enter Name, Age, Gender. \n");
    scanf("%s%d%c%c", &p->na, &p->age, &p->gen, &p->gen);

    printf("%s %d %c", p->na, p->age, p->gen);
}   