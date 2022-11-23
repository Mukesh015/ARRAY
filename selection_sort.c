#include<stdio.h>
#include<stdlib.h>
void selection_sort(int ar[],int size)
{
    int temp,i,j,min;
    for (int i = 0; i<size-1; i++)
    {
        min = i;
        for (int j = i+1 ; j < size; j++)
        {
            if (ar[j]<ar[min])
            {
                min=j;
            } 
        }
        if (min!=i)
        {
            temp=ar[i];
            ar[i]=ar[min];
            ar[min]=temp;
        }
    }
    for (int i = 0; i < size; i++)
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
        printf("%d\n",ar[i]);
    }
    printf("The sorted array is\t");
    selection_sort(ar, size);
}