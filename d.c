#include<stdio.h>
struct cricketer
{
    char cname[20],nat[20];
    int rank,runs;
    float avg;
}
main()
{
    struct cricketer c1,c2,c3;
    printf("Enter the details of 3 cricketers\n");
    printf("name, nationality,ODI rank,tot runs,average of c1\n");
    scanf("%s%s%d%d%f",c1.cname,c1.nat,&c1.rank,&c1.runs,&c1.avg);
    printf("name, nationality,ODI rank,tot runs,average of c2\n");
    scanf("%s%s%d%d%f",c2.cname,c2.nat,&c2.rank,&c2.runs,&c2.avg);
    printf("name, nationality,ODI rank,tot runs,average of c3\n");
    scanf("%s%s%d%d%f",c3.cname,c3.nat,&c3.rank,&c3.runs,&c3.avg);


}
