// You are using GCC

#include <stdio.h>
#include <string.h>


void reverse(char *arr, int n){
    
    
    int left=0;
    int right= n - 1;
    
    
  while(left<right){
      char temp= *(arr+left);
      *(arr+left)= *(arr+right);
      *(arr+right)=temp;
      
      left ++;
      right--;
  }
    
}

int main(){
    
    char arr[50];
    
    scanf("%s",arr);
    
    int n=strlen(arr);
    
    reverse(arr,n);
    
    printf("%s",arr);
    
    return 0;
}
