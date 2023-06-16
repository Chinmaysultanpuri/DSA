#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NULL 0

struct student
{
    char name[20];
    int rno;
    float ht;
    struct student *link;
};

int main()
{
    struct student *head,*start,*ptr;
    head=NULL;
    int ch,pos,count,rno;
    struct student* insert_at_front(struct student*,struct student *);
    struct student* insert_at_end(struct student*,struct student *);
    struct student* delete_at_front(struct student*);
    struct student* delete_at_end(struct student*);
    void display_SLL(struct student*);
    int count_node(struct student *head);
    struct student* insert_at_pos(struct student *head, struct student *ptr,int pos);
    struct student* delete_at_pos(struct student *head,int pos);
    struct student* search_rno(struct student *head);
    struct student* search_ht(struct student *head);
    struct student* search_name(struct student *head);
    struct student* insert_before_rno(struct student *head,int rno);
    struct student* insert_after_rno(struct student *head,int rno);

do
{
   printf("1--INSERT A NODE AT FRONT\n");
   printf("2--INSERT A NODE AT END\n");
   printf("3--DELETE A NODE AT FRONT\n");
   printf("4--DELETE A NODE AT END\n");
   printf("5--DISPLAY LINKED LIST\n");
   printf("6--COUNT THE NODES\n");
   printf("7--INSERT A NODE AT POSITION\n");
   printf("8--DELETE A NODE AT POSITION\n");
   printf("9--SEARCH ROLLNO\n");
   printf("10--SEARCH HEIGHT\n");
   printf("11--SEARCH NAME\n");
   printf("12--INSERT A NODE BEFORE RNO\n");
   printf("13--INSERT A NODE AFTER RNO\n");
   printf("14--EXIT\n");

   printf("Enter your choice\n");
   scanf("%d",&ch);

   switch(ch)
   {
     case 1:ptr=(struct student*)malloc(sizeof(struct student));
            printf("enter name rollno and height of student\n");
            scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
            head=insert_at_front(head,ptr);
            break;
    case 2: ptr=(struct student*)malloc(sizeof(struct student));
            printf("enter name rollno and height of student\n");
            scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
            head=insert_at_end(head,ptr);
            break;
    case 3: if(head==NULL)
            printf("SLL is empty\n");
            else
            {
               head=delete_at_front(head);
            }
            break;
    case 4:if(head==NULL)
            printf("SLL is empty\n");
            else
            {
               head=delete_at_end(head);
            }
            break;

    case 5: if(head==NULL)
            printf("SLL is empty\n");
            else
            {
              display_SLL(head);
            }
            break;
    case 6: count=count_node(head);
            printf("number of node=%d\n",count);
            break;
    case 7: printf("enter the position\n");
            scanf("%d",&pos);
            if(pos<1 || pos>count_node(head)+1)
                printf("invalid position\n");
            else
            {
                ptr=(struct student*)malloc(sizeof(struct student));
                printf("enter name rollno and height of student\n");
                scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
                if(pos==1)
                {
                    head=insert_at_front(head,ptr);

                }
                else if(pos==count_node(head)+1)
                {
                    head=insert_at_end(head,ptr);
                }
                else
                {
                    head=insert_at_pos(head,ptr,pos);
                }
            }
            break;
    case 8:printf("Enter the position\n");
           scanf("%d",&pos);
           if(pos<1 || pos>count_node(head))
            printf("Invalid position\n");
           else
           {
               if(pos==1)
               {
                   head=delete_at_front(head);
               }
               else if(pos==count_node(head))
               {
                   head=delete_at_end(head);
               }
               else
               {
                   head=delete_at_pos(head,pos);
               }
           }
           break;
    case 9:if(head==NULL)
              printf("SLL is empty\n");
            else
            {
                head=search_rno(head);
            }
            break;
    case 10:if(head==NULL)
              printf("SLL is empty\n");
            else
            {
                head=search_ht(head);
            }
            break;
    case 11:if(head==NULL)
               printf("SLL is empty\n");
            else
            {
                head=search_name(head);
            }
            break;
    case 12:
            if(head==NULL)
            {
               printf("SLL is empty\n");
            }
            else
            {
                head=insert_before_rno(head,rno);
            }
            break;
    case 13:
            if(head==NULL)
            {
              printf("SLL is empty\n");
            }
            else
            {
                head=insert_after_rno(head,rno);
            }
            break;

    case 14: exit(0);
             break;
    default:printf("Invalid choice\n");
    break;
   }
}while(ch!=14);
}

struct student* insert_at_front(struct student *head, struct student *ptr)
{
    if(head==NULL)
    {
       head=ptr;
       head->link=NULL;
    }
    else
    {
      ptr->link=head;
      head=ptr;
    }
    return(head);
}

struct student* insert_at_end(struct student *head, struct student *ptr)
{
    struct student *start;
    if(head==NULL)
    {
       head=ptr;
       head->link=NULL;
    }
    else
    {
      start=head;
      while(start->link!=NULL)
      {
         start=start->link;
      }
      start->link=ptr;
      ptr->link=NULL;
    }
    return(head);
}

struct student* delete_at_front(struct student *head)
{
    struct student *cur;
      if(head->link==NULL)
      {
          printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",head->name,head->rno,head->ht);
          free(head);
          head=NULL;
      }
      else
      {
           cur=head;
           head=head->link;
           printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",cur->name,cur->rno,cur->ht);
          free(cur);
      }
      return(head);

}


struct student* delete_at_end(struct student *head)
{
    struct student *start,*cur;
      if(head->link==NULL)
      {
          printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",head->name,head->rno,head->ht);
          free(head);
          head=NULL;
      }
      else
      {
          start=head;
      while(start->link!=NULL)
      {
          cur=start;
         start=start->link;
      }
        printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);
          free(start);
          cur->link=NULL;
      }
      return(head);

}

void display_SLL(struct student *head)
{
   struct student *start;
   start=head;
   while(start->link!=NULL)
   {
       printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);
       start=start->link;
   }
     printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);

}

int count_node(struct student *head)
{
     int c=0;
        struct student *start;
    if(head==NULL)
       return(c);
    else
    {
        start=head;
        while(start!=NULL)
        {
            c++;
            start=start->link;
        }
        return(c);
    }

}

struct student* insert_at_pos(struct student *head, struct student *ptr,int pos)
{
    int p=1;
    struct student *start,*temp;
    start=head;
    while(p!=pos)
    {
        temp=start;
        start=start->link;
        p++;
    }
    temp->link=ptr;
    ptr->link=start;
    return(head);
}

struct student* delete_at_pos(struct student *head,int pos)
{
    int p=1;
    struct student *cur,*temp;
    cur=head;
    while(p!=pos)
    {
        temp=cur;
        cur=cur->link;
        p++;
    }
    printf("Deleted node details are:\n");
    printf("name=%s\t rollno=%d\t height=%f\n",cur->name,cur->rno,cur->ht);
    temp->link=cur->link;
    free(cur);
    return(head);
}

struct student* search_rno(struct student *head)
{
    struct student *start;
    int r;
    printf("Enter the rollno to be search\n");
    scanf("%d",&r);
    start=head;
    while(start!=NULL)
    {
        if(start->rno==r)
        {
            printf("Student found\n");
            printf("Name=%s\t Rollno=%d\t Height=%f\n",start->name,start->rno,start->ht);
            break;
        }
        start=start->link;
    }
    if(start==NULL)
    {
        printf("Student not found\n");
    }
    return(head);
}

struct student* search_ht(struct student *head)
{
    struct student *start;
    float h;
    printf("Enter the height to be search\n");
    scanf("%f",&h);
    start=head;
    while(start!=NULL)
    {
        if(start->ht==h)
        {
            printf("Student found\n");
            printf("Name=%s\t Rollno=%d\t Height=%f\n",start->name,start->rno,start->ht);
            break;
        }
        start=start->link;
    }
    if(start==NULL)
    {
        printf("Student not found\n");
    }
    return(head);
}

struct student* search_name(struct student *head)
{
   struct student *start;
   char n[30];
   printf("Enter the name to be search\n");
    scanf("%s",&n);
    start=head;
    while(start!=NULL)
    {
        if(strcmp(start->name,n)==0)
        {
            printf("Student found\n");
            printf("Name=%s\t Rollno=%d\t Height=%f\n",start->name,start->rno,start->ht);
            break;
        }
        start=start->link;
    }
    if(start==NULL)
    {
        printf("Student not found\n");
    }
    return(head);
}
struct student* insert_before_rno(struct student *head,int rno)
{
   struct student *start,*temp,*ptr;
   int r;
   printf("Enter roll number after which to insert\n");
   scanf("%d",&r);
   ptr=(struct student*)malloc(sizeof(struct student));
   printf("enter name rollno and height of student\n");
   scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
   start=head;
   while(start!=NULL)
   {
       if(start->rno==r)
       {
           temp=start;
           start=start->link;
           break;
       }
       temp=start;
       start=start->link;
       temp->link=ptr;
       ptr->link=start;
   }
   if(start==NULL)
   {
       printf("the roll number not found\n");
   }
   return (head);
}
struct student* insert_after_rno(struct student *head,int rno)
{
   struct student *start,*temp,*ptr;
   int r;
   printf("Enter roll number\n");
   scanf("%d",&r);
   ptr=(struct student*)malloc(sizeof(struct student));
   printf("enter name rollno and height of student\n");
   scanf("%s%d%f",ptr->name,&ptr->rno,&ptr->ht);

   start=head;
   while(start!=NULL)
   {
       if(temp->rno==r)
       {
           ptr->link=start;
           temp->link=ptr;
           
           break;
       }
       temp=start;
       start=start->link;
   }
   if(start==NULL)
   {
       printf("the roll number not found\n");
   }
   return (head);

}