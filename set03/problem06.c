#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b){
    printf("Enter the string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring){
    char* substring_ptr = strstr(string, substring);
    if(substring_ptr != NULL){
        return substring_ptr - string;
    }
    return -1;
}

void output(char *string, char *substring, int index){
    if(index == -1){
        printf("Substring '%s' not found in string '%s'\n", substring, string);
    } else {
        printf("Substring '%s' found at index %d in string '%s'\n", substring, index, string);
    }
}
