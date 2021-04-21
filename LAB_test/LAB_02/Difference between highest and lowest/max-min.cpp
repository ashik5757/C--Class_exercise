#include<stdio.h>

int main()

{
    int num;
    int min,max;
   
    printf(" Enter number : ");
    scanf("%d",&num);
   
    min=num;
    max=num;
    
    while(num!=-1){
        
        scanf("%d",&num);
        
       
        
        if(num<min)
            
            {
              if(num==-1) {
               continue; 
                }
            
              min=num;
           }
        
        if(num>max)
            
            {
            
            max=num;
            }
        
 
        }

    

     printf(" Maximum : %d",max);
     printf("\n Minimum : %d",min);
     printf("\n Differance between maximum and minimum : %d",max-min);
    
    
return 0;
}
