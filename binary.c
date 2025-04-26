// Binary search with shorting
#include<stdio.h>
int main(){
    int a[10],i,j,start=0,last=9,data;
        
        for(i=0;i<10;i++){
            printf("enter array: ");
            scanf("%d",&a[i]);
        }
    for(i=0;i<10;i++){          //shorting
        for(j=1+i;j<10;j++){
            if(a[j]<a[i]){
                int b=a[i];
                    a[i]=a[j];
                    a[j]=b;
            }
        }
    }
    for(i=0;i<10;i++){           //printing
        printf("%d ",a[i]);
    }
    printf("\nenter data: ");     //binary search starts from here
    scanf("%d",&data);
    while(start<=last){
        int mid=(start+last)/2;
        if(data==a[mid]){
            printf("value:%d\nindex:%d ",a[mid],mid);
            break;
        }else if(data>a[mid]){
            start=mid+1;
         }
        else{
            last=mid-1;
        }
    }if(data!==)
    return 0;
}
// else if(last<start){
//             printf("data not found");
//         }