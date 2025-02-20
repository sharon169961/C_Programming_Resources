// You are using GCC

//FIND VOWELS IN A STRING

#include <stdio.h>
#include <string.h>

void findWord(char *arr, int n){
    
    int v=0;
    int c=0;
    
    for(int i=0;i<n;i++){
        
        if( *(arr+i)=='a' || *(arr+i)=='e' || *(arr+i)=='i' || *(arr+i)=='o' || *(arr+i)=='u' ){
            v=v+1;
        }
        
        else{
            
            c=c+1;
        }
    }
    
    printf("vowels: %d\n",v);
    printf("consonants: %d\n",c);
}


int main(){
    
    
    char arr[100];
    scanf("%s",arr);
    
    int n=strlen(arr);
    
    findWord(arr,n);
    
    return 0;
}
