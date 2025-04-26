#include<stdio.h>
#define max 5

int a[max];
int top = -1;

void push(){
    int x;
    printf("enter data");
    scanf("%d",&x);
    if(top==max-1){
        printf("stack overflow\n");
    }
    else{
        top++;
        a[top]=x;
    }
    return;
}
void pop(){
    int item;
    if(top==-1){
        printf("underflow");
    }else{
        item=a[top];
        top--;
        //printf("%d",item);
    }
    return;
}

int main(){
    push();
    push();
    push();
    push();
    push();
    push();
    pop();
    for(int i=0;i<6;i++){
        printf("\n%d ",a[i]);
    }
    return 0;
}