#include<stdio.h>

int main()

{
    int a=1,n=1;
    
    while(a<=5){
      
         int b=1;
        
        while(b<=a){
            printf(" %d",n);
            b++;
            n++;
        }
        
        printf(" \n");
        a++;
    }
   
    return 0;
}
