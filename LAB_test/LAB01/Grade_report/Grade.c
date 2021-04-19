#include<stdio.h>

int main()

{
    int a;
    
    printf("Enter your mark :");
    scanf("%d",&a);
    
    if(a>100||a<0)
    
   printf("\n Your mark is not correct");
    
    
    
    else{
        
        
        if(a>=91) {
        printf("\n Your grade is 'A+' ");
       
        
        }
        
      else if(a>=81) {
        
           printf("\n Your grade is 'A' ");
       
 
      }  
        
     else if(a>=71) {
        
           printf("\n Your grade is 'B' ");
       
 
      }  
        
        
        else if(a>=61) {
        
           printf("\n Your grade is 'C' ");
       
 
      }  
        
        else {
        
           printf("\n Fail ");
      
 
        
          }
    
    
 }    
    
    return 0;
    
    
}