// You are using GCC


#include <stdio.h>
#include <string.h>

typedef struct{
    
    int number;
    float cost;
    int item;
    char date[50];
}supermarket;

int main(){
    
    int n;
    scanf("%d",&n);
    

   supermarket product[n];
   
   for(int i=0;i<n;i++){
       
       scanf("%d %f %d %s", &product[i].number,&product[i].cost, &product[i].item, product[i].date);
   }
   
   //Product numbe rto search
   
   int pn;
   scanf("%d",&pn);
   printf("The details of the Searched product are:\n");
   for(int i=0;i<n;i++){
       if(product[i].number==pn){
           
           printf("%d %.2f %d %s",product[i].number,product[i].cost, product[i].item, product[i].date);
       }
   }
   
   printf("\n");
   
   //Products searched based on cost tresh-hold
   
   printf("\n");
   
   float ct;
   scanf("%f",&ct);
   printf("Products with cost about %.2f:\n",ct);
   for(int i=0; i<n;i++){
       if(product[i].cost>ct){
           
            printf("%d %.2f %d %s\n",product[i].number,product[i].cost, product[i].item, product[i].date);
           
       }
   }
   
   //Products with searched expiry date
   
   printf("\n");
   
   
   
   char ed[20];
   scanf("%s",ed);
   printf("Products with the searched expiry date:\n");
   for(int i=0;i<n;i++){
       if(strcmp(product[i].date,ed)==0){
           printf("%d %.2f %d %s\n",product[i].number,product[i].cost,product[i].item, product[i].date);
       }
           
       }
   
   
   

   
   return 0;
   
}

