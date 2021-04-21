#include<stdio.h>

int main()

{
    int num;
    int i,x=1;
   
    printf(" Enter a non-negative integer : ");
   
    scanf("%d",&num);
    
    if(num>=0) {
    	
    for(i=1;i<=num;i++){
        
        x=x*i;
        
    }	
    	
    	printf("\n  Factorial : %d",x);
    	
    	
    	
	}
    
    else {
    	
    	printf("\n This is not a non-negative integer ");
    	
	}
    
    
    
   
    return 0;
}
