#include<stdio.h>
void main(){
    int s1,s2;
    printf ("enter size of the array 1:");
    scanf("%d",&s1);
         printf ("enter size of the array 2:");
    scanf("%d",&s2);
    int ar1[s1], ar2[s2],ar3[s1+s2];
    printf("enter element of array 1:");
    for (int i=0;i<s1;i++){
        scanf("%d",&ar1[i]);
    }
    printf("enter element of array 2:");
    for (int j=0;j<s2;j++){
        scanf("%d",&ar2[j]);
    }
    int i=0,z=0,j=0;
    while (i<s1 && j<s2){
        if(ar1[i]<ar2[j]){
            ar3[z]=ar1[i];
            z++;
            i++;
        }
        else if(ar1[i]>ar2[j]){
             ar3[z]=ar2[j];
            z++;
            j++;
        }
    }
    while(s1<s2 && j<s2){
        ar3[z]=ar2[j];
        z++;
        j++;
        }
    while(s1>s2 && i<s1){
        ar3[z]=ar1[i];
        z++;
        i++;
    }
    for (j=0;j<(s1+s2);j++){
        printf("%d\t",ar3[j]);
    }
}