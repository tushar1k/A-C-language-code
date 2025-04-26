#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
    printf("test case");
    scanf("%d",&t);
    for(i=0;i<=t;i++){
        int x,y;
       scanf("%d %d",&x,&y);
        if(x>=10*y){
            printf("yes\n");
        }else {
            printf("no\n");
            }
    }
	return 0;
}