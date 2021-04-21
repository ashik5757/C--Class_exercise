#include<stdio.h>

int main()

{
    int x,y;
    
   int i,r=1;
    
    printf("Enter base as an integer : ");
    scanf("%d",&x);
    printf("Enter exponent as an integer : ");
    scanf("%d",&y);
    
    for(i=1;i<=y;i++){
        
        r=r*x;
    }
    
    printf(" Ans : %d",r);
    
    
    
}
