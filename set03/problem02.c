#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2, x3, y3;
    int result;

    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);

    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("Enter coordinates of the three points:\n");
    printf("x1, y1: ");
    scanf("%f %f", x1, y1);
    printf("x2, y2: ");
    scanf("%f %f", x2, y2);
    printf("x3, y3: ");
    scanf("%f %f", x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3){
    float distance12 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float distance13 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    float distance23 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    if(distance12 + distance13 > distance23 && distance12 + distance23 > distance13 && distance13 + distance23 > distance12)
        return 1;
    else
        return 0;
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result){
    if(result == 1)
        printf("The given points (%f, %f), (%f, %f), and (%f, %f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    else
        printf("The given points (%f, %f), (%f, %f), and (%f, %f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
}

