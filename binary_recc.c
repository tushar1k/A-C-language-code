#include<stdio.h>

int rec(int start,int end,int mid,int data, int* arr){
    
    // mid=(start+end)/2;
    // if(data==mid){
    //     printf("%d",mid);
    // }//else if()
    // else{
    // rec(start,end,mid,data);
    // }
    // return mid;
}

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int e;
    int start=0, last=9;
    scanf("%d",&e);
    int mid=(a[start]+a[last])/2;
    rec(start,last,mid,e, &a[]);
    // printf("%d %d %d %d",start, last,mid, e);
    return 0;
}