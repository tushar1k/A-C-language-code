#include <stdio.h>

int main () {
    int a,b;
    float c;
    char d;
    int ab;
    int ac;
    int total;
    printf("enter input\n");
    scanf("%d %d",&ab,&ac); //input



    // displaying value(output) 
    // scanf("%d %d %f %c",&a,&b,&c,&d );//takng value (input)
    // //scanf("%d",&a);
    // printf("\nyour input is %d %d %f %c ",a,b,c,d);
    total=ab+ac;
    printf("%d+%d=%d",ac,ab,total);
    return 0;
}