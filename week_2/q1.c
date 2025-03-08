// You are using GCC
// You are using GCC
#include <stdio.h>

int main() {
int n;
scanf("%d", &n);

int arr[n];

for (int i=0; i<n; i++){
    scanf("%d", &arr[i]);
}

for (int j=2; j<n-1; j++){
    
    arr[j]=arr[j+1];
    
    
}

for (int k=0; k<n; k++){
    
    printf("%d ", arr[k]);
}

}
