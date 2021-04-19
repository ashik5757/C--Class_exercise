#include<stdio.h>


int main()

{
    int i=50;
    
    printf("Odd numbers between 1 and 50 in reverse order: \n");
    
    while(i>=0) {
       
        if(i%2!=0){
            printf(" %d",i);
        }
        
        i--;
    }
    
    
    
    
    return 0;
    
}