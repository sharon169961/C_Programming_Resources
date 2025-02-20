// You are using GCC
#include <stdio.h>
#include <string.h>

typedef struct{
    
    int ID;
    float price;
    char dept[100];
}employee;


int main(){
    
    int n;
    scanf("%d",&n);
    
    employee salary[n];
    
    for(int i=0; i<n;i++){
        
        scanf("%d %f %s", &salary[i].ID, &salary[i].price, salary[i].dept);
        
        
    }
    
    
    //To print details based on the ID searched
    
    printf("employee details of searched ID:\n");
    
    int s;
    scanf("%d",&s);
    
    for(int i=0; i<n; i++){
        if(s==salary[i].ID){
            printf("%d %.2f %s\n", salary[i].ID, salary[i].price, salary[i].dept);
        }
    }
    
    //to find people above salary
    
    float k;
    
    scanf("%f",&k);
    
    printf("Employee earning above %.2f:\n",k);
    
    
    for(int i=0;i<n;i++){
        if(salary[i].price>k){
            printf("%d %.2f %s\n", salary[i].ID, salary[i].price, salary[i].dept);
        }
            
        }
        
        
        //employees in specified deepartment
        
        char h[100];
        scanf("%s",h);
        
        printf("Employee in department %s:\n",h);
        
        for(int i=0; i<n;i++){
            if(strcmp(salary[i].dept,h)==0){
                printf("%d %.2f %s\n", salary[i].ID, salary[i].price, salary[i].dept);
            
                
            }
        }
    return 0;
}
