#include <stdio.h>


int main(){
    int n = input_array_size();
    int a[n];

    init_array(n, a);
    erotosthenes_sieve(n, a);
    output(n, a);

    return 0;
}

// Function to input the size of the array
int input_array_size(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

// Function to initialize the array
void init_array(int n, int a[n]){
    for(int i = 0; i < n; i++){
        a[i] = i + 2;
    }
}

// Function to implement the Eratosthenes Sieve method
void erotosthenes_sieve(int n, int a[n]){
    int i, j;

    for(i = 2; i * i <= n; i++){
        if(a[i - 2] != 0){
            for(j = i * i; j <= n; j += i){
                a[j - 2] = 0;
            }
        }
    }

    for(; i <= n; i++){
        if(a[i - 2] != 0){
            a[i - 2] = 1;
        }
    }
}

// Function to output the result
void output(int n, int a[n]){
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            printf("%d ", i + 2);
        }
    }
    printf("\n");
}
