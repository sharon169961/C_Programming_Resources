// You are using GCC

#include <stdio.h>


int findAvg(int *arr, int n){
    
    int sum=0;
    int avg;
    
    for(int i=0;i<n;i++){
        sum += *(arr+i);
    }
    
    avg = sum/n;
    
    return avg;
    
    
    
    
    
}

int numAvg(int *arr, int n,int k){
    int d=0;
    for(int i=0;i<n;i++){
        if(*(arr+i) > k){
            
            d=d+1;
            
        }
    }
    
    return d;
}

int main(){
    
    int n;
    scanf("%d", &n);
    
    
    
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int k= findAvg(arr,n);
    printf("Average Score is: %d\n",k);
    
    
    int f=numAvg(arr,n,k);
    
    printf("Number of students above average: %d",f);
    
    
    
    
    
    return 0;
}
