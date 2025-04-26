/*#include<stdio.h>
// sum of digits
int main( )
{
     int q,w,e,r,t,a;
     printf("type a  digit number :");
     scanf("%c%c%c%c%c",&q,&w,&e,&r,&t);
     a=(int)q+w+e+r+t;
     printf("%d",a);
    return 0;
}*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x<y){
	        printf("NO");
	    }else{
            printf("YES");
        }
	}
	return 0;
}
'hi'