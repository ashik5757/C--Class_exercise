#include<stdio.h>
#include<math.h>

int main()

{
    int num;
    double a;
    
    printf("Enter the value :");
    scanf("%d",&num);
    
    a=fabs(num);
    
 printf("\n The absolute value of '%d' is : %.2f",num,a);
    
    
   
    return 0;
}
