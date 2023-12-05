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
int input(){
    int n;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    return n;
}

int find_fibo(int n){
    if(n <= 1)
        return n;

    int prev = 0;
    int curr = 1;

    for(int i = 2; i <= n; i++){
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

void output(int n, int fibo){
    printf("The %dth term of the Fibonacci sequence is: %d\n", n, fibo);
}