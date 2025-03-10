//Remove non alphabetic charcters


#include <stdio.h>
#include <ctype.h>
#include <string.h>

void removeCon(char *str, char *output){
    
    int index=0;
    
    int k=strlen(str);
    
    for(int i=0; i<k; i++){
        
        if(isalpha(str[i])){
            
            output[index++]=str[i];
        }
    }
    
    output[index]='\0'; //null termiante it
    
   
}

int main(){
    
    char str[100];
    char output[100];
    
    while(scanf("%s",str ) != EOF){
        
        removeCon(str, output);
        printf("%s\n",output);
    }
    
    return 0;
    
   
}
