#include<stdio.h>
int main(){
    int i,find,a[]={1,2,5,4,7};
    scanf("%d",&find);
    for(i=0;i<5;i++){
        if(a[i]==find){
            printf("index%d\nvalue%d",i,a[i]);
            break;
        }
        
    }if(a[i]!=find){
        printf("not present");
    }
    return 0;
}