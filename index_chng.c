#include<stdio.h>
int main(){
    int i,a[50],last=0;
    int j=1;
    int tem1, temp2;
    while( j==1){
        printf("\n%d\n",last);
        scanf("%d",&tem1);
        printf("\n%d\n",last);
        for(i=last;i==0;i--){
            printf("\n%d\n",last);
            a[i-1]=a[i];
        }
        printf("\n%d\n",last);
        a[0] = tem1;
        last+=1;
        printf("\n%d\n",last);
        printf("want to add more value if yes press 1 if no press 0");
        scanf("%d",&j);
    }

    // for(i=0;i<6;i++){
    //     for(j=6;j<6;j--){
    //        // if(a[j]<a[i]){
    //             int b=a[i];
    //                 a[i]=a[j];
    //                 a[j]=b;
            
    //     }
    // }
    printf("arry..\n ");
    for(i=0;i<last;i++){           //printing
        printf("%d ",a[i]);
    }
    return 0;
}