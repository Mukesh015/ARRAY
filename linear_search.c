#include<stdio.h>
#include<stdlib.h>
void linear_search(int a[],int size,int element)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (a[i]==element){
           break;
        }
    }
        if (i<size)
    {
        printf("%d found at %d index",element,i);
    }
    else
    {
        printf("Element not found");
    }
}
void main()
{
    int size, i,j,a[10],element;
    printf("Enter the size of array\t");
    scanf("%d",&size);
    printf("Enter the elements\t");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the item to be searched\t");
    scanf("%d",&element);
    linear_search(a, size,element);
}