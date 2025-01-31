//sum of second and second last element

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
	
	
	int k1=arr[1];
	int k2=arr[n-2];
	
	for(int j=0;j<n;j++){
	    sum=k1+k2;
	}
	
	
	
	printf("the sum is %d:",sum);
	
	return 0;


}
