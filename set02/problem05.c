// Write a program to find GCD _(HCF)_ of two numbers.

#include <stdio.h>
int input();
int find_gcd(int a,int b);
void output(int a,int b,int gcd);

int main()
{
    int num1=input();
    int num2=input();
    int gcd=find_gcd(num1, num2);
    output(num1, num2, gcd);
    return 0;
}
int input() 
{
    int x;
    printf("Enter the value: ");
    scanf("%d",&x);
    return x;
}
int find_gcd(int a,int b)
{
    while (b != 0) {
        int temp=b;
        b=a % b;
        a=temp;
    }
    return a;
}
void output(int a,int b,int gcd) 
{
    printf("The GCD of %d and %d is %d\n",a,b,gcd);
}