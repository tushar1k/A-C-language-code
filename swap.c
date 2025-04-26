#include<stdio.h>
int main(){
    /*int a,b,c;

    printf("enter 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    printf("%d and %d\n",a,b);
    c=b;
    b=a;
    a=c;
    
    printf("%d and %d",a,b);*/
    int C,D;
    printf("enter the value of C =");
    scanf("%d",&C);
    printf("/n");
    printf("enter the value of D=");
    scanf("%d",&D);
    printf("/n");
    printf("C=%d,D=%d after swping\n",C,D);
    C = C+D;
    D=C-D;
    C= C- D;
    printf("C=%d ",C);
    printf("D=%d",D);
    return 0;
}