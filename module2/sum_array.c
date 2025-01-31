//sum of n array elements

#include <stdio.h>

int main() {

	int arr[100];
	int n;
	printf("enter number of array elements u want to enter");
	scanf("%d",&n);
	int sum=0;
	for(int i=0; i<n; i++) {
	    
	    scanf("%d",&arr[i]);

	}
	
	for(int j=0;j<n;j++){
	    sum=sum+arr[j];
	}
	
	
	
	printf("the sum is %d:",sum);
	
	return 0;


}
