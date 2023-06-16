#include<stdio.h>
struct p
{
    char sname[20];
    char pn[20];
    int odr;
    int truns;
    float ba;
}s[3];

main()
{
    int n = 3, j, k;
    

    for(int i = 0; i<n; i++)
    {
        printf("Enter details of the %d batsman : \n", i+1);
        printf("Enter name of the player : \n");
        
        gets(s[i].sname);
        printf("Enter nationality of the player : \n");
        getchar();
        gets(s[i].pn);
        printf("Enter ODI rank of the player : \n");
        scanf("%d",&s[i].odr);
        printf("Enter total runs of the player : \n");
        scanf("%d",&s[i].truns);
        printf("Enter batting avg of the player : \n");
        scanf("%f",&s[i].ba);
        getchar();
    }

    float min = s[0].ba;
    for(j = 0; j < n; j++)
    {
        if(min > s[j].ba)
        {
            min = s[j].ba;
        }
    }
    printf("Min batting average is %f \n",min);

    for(int y = 0; y < n; y++)
    {
        if(min == s[y].ba)
        {
            printf("%s \n", s[y].sname);
            printf("%s \n", s[y].pn);
        }
    }

    int max = s[0].odr;
    for(k = 0; k < n; k++)
    {
        if(max < s[k].odr)
        {
            max = s[k].odr;
        }
    }
    printf("Max ODI Rank is %d \n",max);

    for(int y = 0; y < n; y++)
    {
        if(max == s[y].odr)
        {
            printf("%s \n", s[y].sname);
            printf("%s \n", s[y].pn);
        }
    }
}