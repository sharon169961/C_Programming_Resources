// You are using GCC


#include <stdio.h>
#include <math.h>


typedef struct{
    
    float real;
    float imag;
}Complex;


Complex add(Complex a, Complex b){
    Complex result={a.real+b.real,a.imag+b.imag};
    return result;
}

Complex subtract(Complex a, Complex b){
    Complex result={a.real-b.real,a.imag+b.imag};
    return result;
}

Complex multiply(Complex a, Complex b){
    Complex result={a.real*b.real-a.imag*b.imag, a.real*b.imag+a.imag*b.real};
    return result;
}

float modulus(Complex a){
    return sqrt(a.real*a.real + a.imag*a.imag);
}

void printComplex(Complex a){
    
    if(a.imag > 0){
        
        printf("%.2f + %.2f\n",a.real,a.imag);
    }
    
    else if(a.imag < 0){
        printf("%.2f - %.2f\n",a.real,a.imag);
    }
    
    
    
}


int main(){
    Complex c1,c2;
    
    scanf("%f %f",&c1.real, &c1.imag);
    scanf("%f %f",&c2.real, &c2.imag);
    
    //Perform operation
    
    Complex sum=add(c1,c2);
    Complex diff=subtract(c1,c2);
    Complex prod=multiply(c1,c2);
    float mod1=modulus(c1);
    float mod2=modulus(c2);
    
    
    //print results
    
    printComplex(sum);
    printComplex(diff);
    printComplex(prod);
    printf("%.2f\n",mod1);
    printf("%.2f\n",mod2);
    
    return 0;
    
    
    
}
