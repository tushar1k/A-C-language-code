#include<stdio.h>
#include<string.h>

    struct student{
        char name[50]
        int rollno;
        int mark;
    };


int main(){
    struct student a;
    a.rollno = 2;
    a.mark = 98;
    strcpy(a.name,"tushar");

    printf("student name=%s\n", a.name);
    printf("student rollno=%d\n", a.rollno);
    printf("student mark=%d\n", amark);

    return 0;
}