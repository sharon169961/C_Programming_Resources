// You are using GCC


#include <stdio.h>

typedef struct{
    
    char name[100];
    int number;
    float account;
}bank;

int main(){
    
    int n;
    scanf("%d",&n); //number of customers
    
    //Array to store customer details;
    
    bank customers[n];
    
    for(int i=0;i<n;i++){
        
        scanf("%s %d %f",customers[i].name, &customers[i].number, &customers[i].account);
    }
    
    //customers with balance less tham 200
    
    printf("Customers with Balance less tham 200:\n");
    for(int i=0;i<n;i++){
        if(customers[i].account < 200){
            printf("%s ", customers[i].name);
        }
    }
    
    printf("\n");
    
    //Apply 3% interest rate to people with more than 1000
    
    for(int i=0; i<n;i++){
        if(customers[i].account>1000){
            customers[i].account = customers[i].account + customers[i].account*(0.03);
            printf("Updated balance of %s: %.2f\n",customers[i].name,customers[i].account);
        }
    }
    
    return 0;
}
