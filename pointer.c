#include<stdio.h>

main()
{
    int a, *p = &a;
    a = 546;

    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", p);
    printf("%d\n", &p);
    printf("%d\n", *p);
    p = p - 4;
    printf("%d\n", p);

}