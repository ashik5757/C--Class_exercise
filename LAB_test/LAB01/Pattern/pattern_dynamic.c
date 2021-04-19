#include<stdio.h>

int main()

{
    int a=1,b;
    int r,n=1;
  
    printf("Enter the value of row :");
    scanf("%d",&r);
   
    while(a<=r) {
      
         b=1;
        
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