#include<stdio.h>
//program to find avrage marks obtained by a class of 30 students
int main(){
    float sum=0.0;
    float avg;
    int i;
    int marks[10]; //array declaration
    printf("enter marks\n");
    for(i=0;i<=9;i++){
        scanf("%d",&marks[i]);
    }for(i=0;i<=9;i++){
        sum=sum+marks[i];
    }
    avg=sum/10;
    printf("avrage marks=%5.2f\n",avg);
    return 0;
}