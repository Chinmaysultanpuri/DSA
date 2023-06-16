#include<stdio.h>
struct book
{
   char title[20];
   char author[30];
   float price;
   int page;
};

main()
{
   int n;
   printf("Enter number books : \n");
   scanf("%d", &n);
   struct book k[10];

   void read(struct book k[10], int n);
   void display(struct book k[10], int n);
   void avg(struct book k[10], int n);
   void min(struct book k[10], int n);

   read(k, n);
   display(k, n);
   avg(k, n);
   min(k, n);

}


void read(struct book k[10], int n)
{
   for(int i = 0; i < n; i++)
   {
      printf("Enter the details of %dth book : \n", i+1);
      scanf("%s%s%f%d", &k[i].title, &k[i].author, &k[i].price, &k[i].page);
   }
}

void display(struct book k[10], int n)
{
   for(int i = 0; i < n; i++)
   {
      printf("%s %s %f %d \n", k[i].title, k[i].author, k[i].price, k[i].page);
   }
}

void avg(struct book k[10], int n)
{
   float tot = 0;
   for(int i = 0; i < n; i++)
   {
      tot = tot + k[i].price;
   }
   printf("Average price = %f", tot/n);
}

void min(struct book k[10], int n)
{
    int j;
    for(int i = 0; i < n; i++)
    {
        int min = k[0].price;
        for(int i = 0; i < n; i++)
        {
            if(k[i].price < min)
            {
                min = k[i].price;
                j = i;
            }
        }
    }
    printf("The details of the book : \n");
    printf("%s %s %f %d \n", k[j].title, k[j].author, k[j].price, k[j].page);
}