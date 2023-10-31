//Write a program find whether a number is a composite number
//>A Composite number has more than 2 factors.
#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n,result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
}
int input_number()
{
    int x;
    printf('Enter the number:');
    scanf('%d',&x);
    return x;
}
int is_composite(int n)
{
    for(int i=1;i<=n;i++)
    {
       if(n%i==0)
       {
        return 1;
       }
       return 0;
    }
}
void output(int n, int result)
{
    if(result==1){
        printf("%d is a composite number",n);
    }
    else{
        printf('%d is not a composite number',n);
    }
}