#include<stdio.h>
#define SIZE 100
void main()
{
    int arr[SIZE],size;
    printf("\nEnter the size of array\n");
    scanf("%d",&size);
    if(size>100)
    {
        printf("\nOverflow.......\n");
    }
    else if(size<1)
    {
        printf("\nInvalid size......\n");
    }
    else{
        printf("\nEnter the %d elements of array.\n",size);
        for(int i=0; i<size; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("\nElements of array are.\n");
        for(int i=0; i<size; i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\nThank you!!!!!\n");
    }

}