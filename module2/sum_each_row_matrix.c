//sum of each row in a matrix and print the matrix also

#include <stdio.h>

int main(){
    
    int n1;
    int n2;
    
    printf("enter row:\n",n1);
    scanf("%d",&n1);
    printf("enter coloumn:\n",n2);
    
    scanf("%d",&n2);
    int mat[n1][n2];
    
    for (int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    
    for(int k=0;k<n1;k++){
        int sum=0;
        for(int m=0;m<n2;m++){
            
            sum+=mat[k][m];
            
            
        }
        
        printf("the sum of row %d:%d\n",k+1,sum);
    }
    
    
    
    
}
