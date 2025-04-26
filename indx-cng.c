// CURRNTLY WORKING
#include<stdio.h>
void mod(int []);
int main(){
    int i,a[]={1,2,3,4,5};
        mod(a);
     for(int i=0;i<5;i++){
         printf("%d ",a[i]);
     }
    return 0;
}

void mod(int b[])
{
    for(int i=0,i<5,i++){
        b[i]*=3;
    }
    return;
}