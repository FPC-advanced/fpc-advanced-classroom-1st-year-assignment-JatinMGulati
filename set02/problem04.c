//Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n,sum;
    n=input_array_size();
    int a[n];
    input_array();
    sum=sum_composite_numbers();
    output();
}
int input_array_size(int n, int a[n])
{
    int x;
    printf("Enter the array size:%d/n",n);
    return x;
}
void input_array(int n,int a[n])
{
    printf("enter the value:");
    for(int i=0;i<n,i++)
    {
       scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 1;
        }
    }
    return 0;
    {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}
}
void output(int sum)
{
    printf("Then sum if composite numbers in the set: %d/n",sum);
}