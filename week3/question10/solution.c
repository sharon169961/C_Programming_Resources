// You are using GCC


#include <stdio.h>


void findMinMax(int *arr, int n){
    
    int min=100;
    int max=0;
    
    for(int i=0;i<n;i++){
        if (*(arr+i) > max){
            max= *(arr+i);
        }
        
        if(*(arr+i) < min){
            min= *(arr+i);
        }
    }
    
    printf("Max:%d\n",max);
    printf("Min:%d\n",min);
    
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    findMinMax(arr,n);
    
    return 0;
}
