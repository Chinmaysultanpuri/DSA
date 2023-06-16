#include<stdio.h>
#include<stdlib.h> 

int main()
{
    int *iptr;
    float *fptr;

    iptr = (int *) malloc(sizeof(int));
    fptr = (float *) malloc(sizeof(float));

    printf("Enter an integer and a float: \n");
    scanf("%d%f", iptr, fptr);

    printf("Sum = %f", (*iptr+*fptr));

    free(iptr);
    free(fptr);
    return 0;
}
