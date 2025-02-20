#include <stdio.h>
#include <string.h>


void swap(int *arr){
    
   
        
        int temp=*(arr);
        *(arr)= *(arr+1);
        *(arr+1)=temp;
    
}


int main(){
    
    int arr[5];
    
    for(int i=0;i<2;i++){
        
        scanf("%d",&arr[i]);
        
    }
    
    swap(arr);
    
    printf("%d %d",arr[0],arr[1]);
    
    return 0;
}
