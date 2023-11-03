#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int is_composite(int num);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main() {
    int n, sum;

    n = input_array_size();
    int a[n];

    input_array(n, a);

    sum = sum_composite_numbers(n, a);
    output(sum);

    return 0;
}

int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int is_composite(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not composite.
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 1; // It's a composite number.
        }
    }
    return 0; // It's not a composite number.
}

int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}

void output(int sum) {
    printf("The sum of composite numbers in the array is: %d\n", sum);
}
