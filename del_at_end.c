//deletion at the end of the array
#include<stdio.h>

int main(){
    int pos,i;
    int a[10]={1,2,3,4,5,6,7,8,9,10};

    scanf("%d",&pos);
    
    for(i=pos;i<10;i++){
        a[i]=a[i+1];
    }
      

    for(i=0;i<10;i++){
        printf(" %d",a[i]);
    }
    return 0;
}