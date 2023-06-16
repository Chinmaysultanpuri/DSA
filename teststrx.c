#include<stdio.h>

struct s 
{
    char name[30];
    int roll;
    float ht;
}s1, s2, *p1 = &s1, *p2 = &s2;

int main()
{
    void read(struct s *p1, struct s *p2);
    void display(struct s *p1, struct s *p2);

    read(p1, p2);
    display(p1, p2);
    return 0;
}

void read(struct s *pt1, struct s *pt2)
{
    printf("Enter Name, Roll, Height : \n");
    scanf("%s%d%f", pt1->name, &pt1->roll, &pt1->ht);

    printf("\nEnter Name, Roll, Height : \n");
    scanf("%s%d%f", pt2->name, &pt2->roll, &pt2->ht);
}

void display(struct s *pt1, struct s *pt2)
{
    printf("%s %d %f\n",pt1->name, pt1->roll,  pt1->ht);

    printf("%s %d %f", pt2->name, pt2->roll, pt2->ht);

}
