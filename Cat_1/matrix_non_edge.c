// Question:
// For a given N×N matrix (N≥4), implement functions to extract and manipulate the non-edge elements as follows:
// 1. Identify and print all the non-edge elements.
// 2. Calculate and print the sum of the non-edge elements.
// 3. Transpose the non-edge elements while retaining the edge elements in their original positions, and print the resulting matrix.
// Note: Non-edge elements are the elements that are not located on the boundary of the matrix.
//
// Example:
// Input:
// N: 4
// Matrix:
// 2 3 4 5
// 15 12 33 98
// 9 7 6 5
//
// Output:
// Non-edge elements:
// 51 39
// Sum: 18
// Matrix with transposed non-edge elements:
// 2 3 4 5
// 15 32 33 98
// 9 19 6 5
// 1 7 6 5

#include <stdio.h>

int main(){
    
    int n;
    printf("enter the matrix row and coloum");
    scanf("%d",&n);
    int mat[n][n];
    int sum=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(int i=0;i<n-1;i++){//removing last row for non edge matrix
        for(int j=0;j<n-1;j++){//removing last coloumn for non edge
            printf("%d ",mat[i][j]);
            sum=sum+mat[i][j];
            
        }
        
        printf("\n");
    }
    printf("the sum is:%d",sum);
    
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            printf("%d ",mat[j][i]);
            
        }
        
        printf("\n");
    }
    
    
    

return 0;
}
