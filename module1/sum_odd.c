//sum of all odd numbers

#include <stdio.h>

int main(){
    
    int a;
    scanf("%d",&a);
    int i;
    int sum=0;
    for(i=0; i<=a;i++){
        if(i%2!=0){
            sum=sum+i;
        }
        
        
        
    }
    
    printf("the sum is: %d", sum);
    return 0;
}
   
