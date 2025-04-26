#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkdlistTravrsal(struct node* ptr)
{
    while(ptr!=NULL){
        printf("element is= %d \n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){

struct node *head=(struct node*)malloc(sizeof(struct node));
struct node *first=(struct node*)malloc(sizeof(struct node));
struct node*second=(struct node*)malloc(sizeof(struct node));
struct node*third=(struct node*)malloc(sizeof(struct node));

head->data=7;
head->next=first;

first->data=6;
first->next=second;

second->data=0;
second->next=third;

third->data=3;
third->next=NULL;

//calling of traversal function

 linkdlistTravrsal(head);


return 0;
}