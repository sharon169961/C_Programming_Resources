/*
 * C program to compute and print the Collatz sequence for any given positive integer.
 * The Collatz sequence is generated as follows:
 * - If the number is even, divide it by 2.
 * - If the number is odd, multiply it by 3 and add 1.
 * - Repeat this process until the number becomes 1.
 */


#include <stdio.h>
int main(){
int n;
printf("Enter n:");
scanf("%d",&n);

while(n!=1){
    if(n%2==0){
        n=n/2;
        printf("%d->",n);
    }
    else{
        n=3*n+1;
        printf("%d->",n);
    }
    
    
}

return 0;

}
