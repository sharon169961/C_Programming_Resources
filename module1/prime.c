//check if a number is prime or not

#include <stdio.h>

int main(){
    int a;
    int i;
    scanf("%d",&a);
    for(i=2;i<=a/2;i++){
        if(a%i==0){
            printf("not prime");
            break;
        }
        
        else{
            printf("prime");
            break;
        }
    }
    
}
