#include<stdio.h>
#include<stdlib.h>

void display(int ar[],int size){
    for (int i = 0; i < size; i++){
        printf("%d\t",ar[i]);
    }
}

void insert_1st(int ar[],int size){
    int item,i;
    printf("Enter the item which you wanted to be insrted\t");
    scanf("%d",&item);
    for (i = size-1; i >= 0; i--){
        ar[i+1]=ar[i];
    }
    ar[0]=item;
    size++;
    display(ar,size);
}

void insertion_pos(int ar[],int size,int pos){
    int item;
    printf("Enter the item which you wanted to be insrted\t");
    scanf("%d",&item);
    printf("Enter the position where you want to be inserted");
    scanf("%d",&pos);
    for (int i =size-1; i >= pos-1; i--)
    {
        ar[i+1]=ar[i];
    }
    ar[pos]= item;
    size++;
    display(ar,size);
}

void insert_last(int ar[],int size){
    int item;
    printf("Enter the item which you wanted to be insrted\t");
    scanf("%d",&item);
    ar[size]=item;
    size++;
    display(ar,size);
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
    printf("Enter\n1:insert 1st\n2:for pos\n3:for insert last\n4:exit()\n");
    scanf("%d",&c);
    switch (c){
    case 1:insert_1st(ar,size);
    break;
    case 2:insertion_pos(ar,size,pos);
    break;
    case 3:insert_last(ar,size);
    break;
    case 4:printf("Program end");
    exit(0);
    default:printf("Wrong choice");
    }
}