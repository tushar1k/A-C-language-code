#include <stdio.h>

int main(void)
 {  // small no. teller
	// your code goes here 
    int i,t,a;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x<y){
            a=y-x;
            printf("%d\n",a);
        }
        else {
            a=x-y;
            printf("%d\n",a);
            }
    }
	return 0;
    }