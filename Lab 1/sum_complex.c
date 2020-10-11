#include<stdio.h>

struct complex
{
    float real; 
    float imag;
};

int main()
{
    struct complex c1, c2, c3;`
    printf("Enter the first real complex as real and imaginary parts: \n");
    scanf("%f%f",&c1.real,&c1.imag);
    printf("Enter the first real complex as real and imaginary parts: \n");
    scanf("%f%f",&c2.real,&c2.imag);
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;

    printf("The sum of complex numbers is: %.2f + %.2fi\n",c3.real, c3.imag);
    return 0;

}