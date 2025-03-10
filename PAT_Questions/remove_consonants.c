//Remove consonats from a string


#include <stdio.h>
#include <ctype.h>
#include <string.h>

void removeCon(char *str, char *output){
    
    int k=strlen(str);
    int index=0;
    
    for(int i=0; i<k; i++){
        
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            output[index++]=str[i];
        }
    }
    
    output[index]='\0'; //null termiante it
    
}

int main(){
    
    char str[100];
    char output[100];
    
    while(scanf("%s", str) != EOF){
        
        removeCon(str,output);
        printf("Output: %s\n", output);
    }
    
    return 0;
}
