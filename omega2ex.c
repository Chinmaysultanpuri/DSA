#include<stdio.h>
#include<stdlib.h>
struct book
{
  char name[30];
  int price;
  char ht[30];
  struct book *link;
};

int main()
{
struct book *head,*start,*ptr;
head=NULL;
int ch;
struct book* insert_at_front(struct book*,struct book *);
struct book* insert_at_end(struct book*,struct book *);
struct book* delete_at_front(struct book*);
struct book* delete_at_end(struct book*);
void display_SLL(struct book*);
void num_SLL(struct book*);
struct book* add_SLL(struct book*,struct book *);

do
{
   printf("\n1--INSERT A NODE AT FRONT\n");
   printf("2--INSERT A NODE AT END\n");
   printf("3--DELETE A NODE AT FRONT\n");
   printf("4--DELETE A NODE AT END\n");
   printf("5--DISPLAY LINKED LIST\n");
   printf("6--NUMBER OF NODES\n");
   printf("7--ENTER NODE AT NTH POSITION\n");
   printf("8--EXIT\n");

   printf("enter your choice\n");
   scanf("%d",&ch);

   switch(ch)
   {
     case 1:ptr=(struct book*)malloc(sizeof(struct book));
            printf("enter name price and author name\n");
            scanf("%s%d%s",ptr->name,&ptr->price,ptr->ht);
            head=insert_at_front(head,ptr);
            break;
    case 2: ptr=(struct book*)malloc(sizeof(struct book));
            printf("enter name price and author name\n");
            scanf("%s%d%s",ptr->name,&ptr->price, ptr->ht);
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
    case 6: if(head==NULL)
            printf("NUMBER OF NODES = 0\n");
            else
            {
              num_SLL(head);
            }
            break;
    case 7: if(head==NULL)
            printf("List is empty\n");
            else if(head->link==NULL)
            {
                printf("Can't add \n");
            }
            else
            {
                ptr=(struct book*)malloc(sizeof(struct book));
                printf("enter name price and author name\n");
                scanf("%s%d%s",ptr->name,&ptr->price, ptr->ht);
                add_SLL(head, ptr);
            }
            break;
    case 8: exit(0);break;
    default:printf("Invalid choice\n");break;
   }
}while(ch!=8);
return(0);
}

struct book* insert_at_front(struct book *head, struct book *ptr)
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

struct book* insert_at_end(struct book *head, struct book *ptr)
{
    struct book *start;
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

struct book* delete_at_front(struct book *head)
{
    struct book *cur;
      if(head->link==NULL)
      {
          printf("book deleted is\n");
          printf("name=%s\t price=%d\t author name=%s\n",head->name,head->price,head->ht);
          free(head);
          head=NULL;
      }
      else
      {
           cur=head;
           head=head->link;
           printf("book deleted is\n");
          printf("name=%s\t price=%d\t author name=%s\n",cur->name,cur->price,cur->ht);
          free(cur);
      }
      return(head);

}

struct book* delete_at_end(struct book *head)
{
    struct book *start,*cur;
      if(head->link==NULL)
      {
          printf("book deleted is\n");
          printf("name=%s\t price=%d\t author name=%s\n",head->name,head->price,head->ht);
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
        printf("book deleted is\n");
          printf("name=%s\t price=%d\t author name=%s\n",start->name,start->price,start->ht);
          free(start);
          cur->link=NULL;
      }
      return(head);

}

void display_SLL(struct book *head)
{
   struct book *start;
   start=head;
   while(start->link!=NULL)
   {
       printf("name=%s\t price=%d\t author name=%s\n",start->name,start->price,start->ht);
       start=start->link;
   }
     printf("name=%s\t price=%d\t author name=%s\n",start->name,start->price,start->ht);

}

void num_SLL(struct book *head)
{
    struct book *start;
    int count=0;
    start = head;
    while(start!=NULL)
    {
        count++;
        start=start->link;
    }
    printf("Number of nodes = %d", count);
}

struct book* add_SLL(struct book* head,struct book *ptr)
{
    struct book *start, *startb;
    start = head;
    int count=0;
    while(start!=NULL)
    {
        count++;
        
        start=start->link;
    }
    int n;
    printf("Enter the nth position: \n");
    scanf("%d", &n);
    start = head;
    for(int i =0; i < n; i++)
    {
        startb=start;
        start=start->link;
    }
    startb->link = ptr;
    ptr->link = start;
    
}
