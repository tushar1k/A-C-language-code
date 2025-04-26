#include<stdio.h>
int main(){
    int i,j,a[5]={5,8,7,2,6};
    for(i=0;i<5;i++){
        for(j=1+i;j<5;j++){
            if(a[j]<a[i]){
                int b=a[i];
                    a[i]=a[j];
                    a[j]=b;
            }
        }
    }
    for(i=0;i<5;i++){           //printing
        printf("%d ",a[i]);
    }
    return 0;
}