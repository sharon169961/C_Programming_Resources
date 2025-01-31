//Write a program to find 1+1/2+1/3+1/4+....+1/n
#include <stdio.h>

int main(){
    
    int a;
    scanf("%d",&a);
    int i;
    double sum=0.0;
    for(i=1; i<=a;i++){
        
    sum=sum+(1.0/i);
        
        
        
        
    }
    
    printf("the sum is: %f", sum);
    return 0;
}
    
