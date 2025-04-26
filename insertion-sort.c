//insertion short
#include<stdio.h>
int main(){
    int a[6];
    printf("enter array\n");
    //for input
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    //printing unsorted array
    printf("before shorting\n");
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }

    //main sorting algo
    for(int i=1;i<6;i++){
        int j=i-1;
        for(j=0;j<5;j++){
            if(a[i]<a[j]){
               int b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    //printing shorted array
    printf("\nafter shorting\n");
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    return 0;
}