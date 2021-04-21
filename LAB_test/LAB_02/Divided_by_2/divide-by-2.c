#include<stdio.h>
int main()
{
    int n;
    int c=0;
  
    printf("Enter a number :");
      scanf("%d", &n);
   
     if(n%2!=0)
        printf("Divide by two(2) 0 time");
    else
    {
        while(n!=1)
        {
            n=n/2;
            c++;
        }
        
        printf(" Divide by two(2) %d times",c);
    }
    
    return 0;
}