#include<stdio.h>
struct student
{
    char sname[20];
    int rno;
    float ht;
}s, s1;

main()
{
    printf("enter the student details\n");
    printf("enter name of the student\n");
    gets(s.sname);
    printf("ente the roll no\n");
    scanf("%d",&s.rno);
    printf("enter the height\n");
    scanf("%f",&s.ht);

    printf("enter the student two details\n");
    printf("enter name of the student\n");
    getchar();
    gets(s1.sname);
    printf("ente the roll no\n");
    scanf("%d",&s1.rno);
    printf("enter the height\n");
    scanf("%f",&s1.ht);

    printf("the details of the student are\n");
    printf("name=%s   rollno=%d    height=%f\n",s.sname,s.rno,s.ht);
    printf("the details of the student are\n");
    printf("name=%s   rollno=%d    height=%f\n",s1.sname,s1.rno,s1.ht);
}