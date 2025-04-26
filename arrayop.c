#include<stdio.h>

    int a=3,b[a] ;
    //int a[3]={1,2,3};
    for(int i=0;i<3;){
        scanf("%d ",&b[i]);
        i++;
    }
    for(int i=0;i<3;i++){
        printf("%d ",b[i]);
    }
    return 0;
}