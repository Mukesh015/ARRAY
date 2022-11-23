#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int ar[],int size)
{
    int i,j,temp;
    for(i=1;i<size;i++)
    {
        temp = ar[i];
        j=i-1;
        while(temp<ar[j] && j>=0)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=temp;
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
}
void main()
{
    int size, i,j,ar[10];
    printf("Enter the size of array\t");
    scanf("%d",&size);
    printf("Enter the elements\t");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("You entered below array");
    for(i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("The sorted array is\n");
    insertion_sort(ar, size);
}