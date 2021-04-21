#include<stdio.h>

int main()

{
    int num;
    int i,x=1;
    double sum=1;
   
    printf(" Enter a non-negative number : ");
   
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        
      
          x=x*i;
        
        sum=sum+(1.0/x);
        
    }
    
 
    
    printf("\n  Sum : %.3f",sum);
    
 
    return 0;
}