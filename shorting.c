//BUBBLE SHORTING//  
#include<stdio.h>
int main(){
    int i,j,a[5]={5,8,3,4,7};
    for(i=0;i<5;i++){
        if(a[j]<a[i]){
                int b=a[i];
                    a[i]=a[j];
                    a[j]=b;
            }
            for(i=0;i<5;i++){           //printing
        printf("%d ",a[i]);
        }
    }
    return 0;
}