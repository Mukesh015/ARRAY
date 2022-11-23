#include<stdio.h>
#include<stdlib.h>

void display(int ar[],int size){
    for (int i = 0; i < size; i++){
        printf("%d\t",ar[i]);
    }
}

void delete_1st(int ar[],int size){
    printf("Your final array is\t");
    for (int i = 0; i < size-1; i++){
        ar[i]=ar[i+1];
    }
    size--;
    display(ar,size);
}

void delete_pos(int ar[],int size,int pos){
  printf("Enter the position");
  scanf("%d",&pos);
  printf("Your final array is");
  for (int i = pos-1; i < size-1; i++)
  {
        ar[i]=ar[i+1];
  }
  size--;
  display(ar,size);
  printf("\n");
}

void delete_last(int ar[],int size){
    printf("Your final array is\t");
    for (int i = 0; i < size-1; i++)
    {
        printf("%d\t",ar[i]);
    }
}

void main(){
    int size,ar[10],i,item,pos,c;
    printf("Enter the size of array\t");
    scanf("%d",&size);
    printf("Enter the elements\t");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Your entered array\t");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("\n");
    while(1){
        printf("Enter\n1:delete 1st\n2:for delete pos\n3:for delete last\n4:exit()\n");
        scanf("%d",&c);
        switch (c)
        {
            case 1:delete_1st(ar,size);
            break;
            case 2:delete_pos(ar,size,pos);
            break;
            case 3:delete_last(ar,size);
            break;
            case 4:printf("Program end");
            exit(0);
            default:printf("wrong input");
        }
    }
}