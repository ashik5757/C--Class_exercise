#include<stdio.h>

int main()

{
    int n,i=0;
    int total=0;
    
    printf("Enter numbers :");
    scanf("%d",&n);
    
    while(n!=-1) {
        total=total+n;
        scanf("%d",&n);
        i++;
    }
    
    printf("\n Average = %.2f",(float)total/i);
    
    
    return 0;
}