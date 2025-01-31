// Question: 
// A bookshop is offering a discount on the total price of books purchased. The discount ranges are listed below:
// a) 10% Discount: If the total price of books exceeds $500. 
// b) 5% Discount: If the total price of books is between $300 and $500 (inclusive). 
// c) No Discount: If the total price of books is less than $300. 
// 
// Write a C program that allows a customer to enter the prices of 10 books, calculate the total price of all books, 
// and then apply the appropriate discount based on the conditions mentioned. 
// The program should display the total price before and after applying the discount. 
// Use arrays with pointers to implement the above.



#include <stdio.h>

int main(){
int arr[10];
for(int i=0;i<10;i++){
    printf("enter price of book:");
    scanf("%d",&arr[i]);
}

int sum=0;
int total;


for(int j=0;j<10;j++){
    sum=sum+arr[j];
    
    
}
printf("the total sum is:", &sum);
if(sum>500){
    total=sum-(sum*0.1);
    
}

else if(sum<500 && sum>300){
    total=sum-(sum*0.05);
}

else if(sum<100){
    total=sum;
}
printf("the total sum before discount:%d\n",sum);
printf("the total sum is after discount:%d\n",total);

return 0;


}
