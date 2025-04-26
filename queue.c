#include<stdio.h>
#define max 5

int a[max];
int top = -1;
int i;
void push(){
        printf("enter data");
        scanf("%d",&i);
        if(top==max-1){
            printf("stackoverflow\n");
        }else{
            top++;
            a[top]=i;
        }
        return;
    }
void pop(){
    for(i=0;i<max-1;i++){
        // a[i]+=1;
        a[i]= a[i+1];
    }
    a[top]=0;
 top=top-1;
}


int main(){
    push();
    push();
    push();
    push();
    push();
    push();
    pop();
    // pop();
    // push();
    // push();
     for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}