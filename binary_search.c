#include<stdio.h>
#include<stdlib.h>
void binary_search(int a[],int size,int item)
{
    int low,mid,high,flag=0;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if (a[mid]==item)
        {
            printf("item fond at %d index",mid);
            flag=1;
            break;
        }
        else if(a[mid]<item)
        {
            low=mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    if (flag==0)
    {
        printf("Item not found");
    } 
}
void main()
{
    int low,mid,high,a[100],size,item,i;
    printf("Enter the size of an array\t");
    scanf("%d",&size);
    printf("Enter the array elements\t");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\t");
    scanf("%d",&item);
    binary_search(a,size,item);
}