#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(){
    int n = input();
    int fibo = find_fibo(n);
    output(n, fibo);

    return 0;
}