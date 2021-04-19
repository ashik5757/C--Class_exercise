#include<stdio.h>

int main()

{
    int x,m,i=0;
    
    printf("Enter the nember :");
    scanf("%d",&x);
  
    printf("\n Multiplication table of %d :",x);
    
    while(i<=10){
        
        m=x*i;
        printf("\n %d × %d = %d",x,i,m);
        i++;
    }
    
    
    
    
    return 0;
}