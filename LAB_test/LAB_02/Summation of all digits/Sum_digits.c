#include<stdio.h>

int main()

{
    int i,n,m,r;
    int x=0;


    printf(" Enter an integer : ");
    scanf("%d",&n);

    while(n!=0) {

        r=n%10;
        x+=r;
        m=n-r;
        n=m/10;

    }
    
    printf("\n Ans: %d",x);
    
    
   
    
    return 0;
}
