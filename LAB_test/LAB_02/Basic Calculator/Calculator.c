#include<stdio.h>

int main()

{
    int a,b;
    int x;
    char op;
    
    printf("Enter equation : ");
    scanf("%d %c %d",&a,&op,&b);
    
    switch(op)
    
    {
        case '+':
        x=a+b;
        printf("\n %d + %d = %d",a,b,x);
        
        break;
        
        
        case '-':
        x=a-b;
        printf("\n %d - %d = %d",a,b,x);
        
        break;
        
        
        case '*':
        x=a*b;
        printf("\n %d × %d = %d",a,b,x);
        
        break;
        
        
       case '/':
        x=a/b;
        printf("\n %d ÷ %d = %d",a,b,x);
        
        break;
        
        
        case '%':
        x=a%b;
        printf("\n %d %% %d = %d",a,b,x);
        
        break;
        
        
        default:
        
        printf("Invalid operator");
        
    }
    
    
    
    
    
    
    return 0;
}