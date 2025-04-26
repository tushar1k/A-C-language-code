#include<stdio.h>
int main(){
   int b[5],a[5];
   //input array
   for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
   }
    for(int i=4,j=0;i>=0,j<5;i--,j++){
        b[j]=a[i];
    }
    //printing array
    for(int i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    return 0;
}