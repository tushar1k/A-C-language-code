//inserting any element in array at any point

#include<stdio.h>
int main(){
int a[100],size,num,pos,i;

printf("enter the size of array");              //for flexible size 
scanf("%d",&size);

printf("enter the element for array");          //entering element
for(i=0;i<size;i++){
    scanf("%d",&a[i]);
}

printf("enter number and position to insert in array");
scanf("%d",&num);
scanf(" %d",&pos);

for(i=size;i>=pos-1;i--){                   //shifting elements forward
    a[i+1]=a[i];
}

a[pos-1]=num;                               //putting element at spicific position in array
size++;

for(i=0;i<size;i++){                        //printing array r output of the code
    printf(" %d",a[i]);
}

return 0;
}