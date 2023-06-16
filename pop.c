#include<stdio.h>
struct student
{
    char sname[20];
    int rno;
    float ht;
};

main()
{
      struct student s;
      struct student s1;
      struct student s2;
   struct student more_height(struct student s,struct student s1);
      printf("enter the  2 student details\n");
      printf("enter name and roll no and height of student 1\n");
      scanf("%s%d%f",&s.sname,&s.rno,&s.ht);

      printf("enter name and roll no and height of student 2\n");
    scanf("%s%d%f",&s1.sname,&s1.rno,&s1.ht);

s2=more_height(s,s1);
printf("the student details whose height is more are\n");
printf("name=%s   rollno=%d   height=%f\n", s2.sname,s2.rno,s2.ht);
}

struct student more_height(struct student s,struct student s1)
{

   if(s.ht>s1.ht)
   {
              return(s);
   }

   else
   {
        return(s1);
   }

}