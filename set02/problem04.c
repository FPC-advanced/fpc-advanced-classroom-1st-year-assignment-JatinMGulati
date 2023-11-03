//Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n,a[100],sum=0;
    n=input_array_size();
    a[n]=input_array();
    
}
int input_array_size()
{
    int x;
    printf()
}
int input_array(int n,int a[n])
{
    printf("enter the value:");
    for(int i=0;i<n,i++)
    {
       scanf("%d",&a[i]);
    }
    return a[n];
}
int sum_composite_numbers(int n, int a[n])
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2;i,num;i++)
    {
        if(num%i==0)
        {
            return 1;
        }
    }
    return 0;
}
void output(int sum)
{
    printf("Then sum if composite numbers in the set: %d",sum);
}