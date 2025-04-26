//ARRAY AND FUNCTIONRRAY//
#include<stdio.h>
    void array_printer(int *array,int size);
    int main(){
        int array[5]={1,2,3,4,5};

        size_t size = sizeof(array)/sizeof(array[0]);//to finde the size of array
        array_printer(array,size);
       // printf("calling from main = %d",&array);
        //printf("The length of the array is %d \n", size);
       // for(i=0;i<size;i++){
            //printf("%d",array[i]);
        //}
        // printf("%d",array[0]);
        return 0;
    }
    void array_printer(int *array, int size){ 
        int i;
        for(i=0;i<size;i++){
            printf("%d",*array+i);
        }
    //printf("calling from function:%d",size);
    }