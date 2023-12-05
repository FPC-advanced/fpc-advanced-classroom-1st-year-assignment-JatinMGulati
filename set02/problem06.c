#include <stdio.h>
#include <string.h>

void input_string(char *a) {
    printf("Enter a string: ");
    fgets(a, 0,stdin);
}

void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);
    int i;

    for (i = 0; i < length; i++) {
        rev_str[i] = str[length - i - 1];
    }
    rev_str[i] = '\0';
}

void output(char *a, char *reverse_a) {
    printf("The reversed string is: %s", reverse_a);
}

int main() {
    char string[100];
    char reverse_string[100];

    input_string(string);
    str_reverse(string, reverse_string);
    output(string, reverse_string);
    return 0;
}