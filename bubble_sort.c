#include<stdio.h>
void bubble_sort(int ar[],int size,int temp){
    int i,j;
    for (i = 0; i < size-1; i++){
        for (int j = 0; j < size-1-i; j++)
        {
            if (ar[j+1]<ar[j])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",ar[i]);
    }
}
void main()
{
    int size, i,j,ar[10],a,b,temp;
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
    bubble_sort(ar,size,temp);
}