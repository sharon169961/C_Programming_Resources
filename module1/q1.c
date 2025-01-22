#include <stdio.h>

int a,b,c;

int main(){
    scanf("%d",&a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>b){

        if(a>c){
            printf("a is greatest");
        }


    }

    else if(b>a){
        if(b>c){
            printf("b is greatest");
        }
    }

    else if(c>a){
        if(c>b){
            printf("c is greatest");
        }
    }

    return 0;
}
