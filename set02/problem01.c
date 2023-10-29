//Write a program to find the area of a triangle.
#include <stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
    int base,height,area;
    input(&base,&height);

}
void input(float *base, float *height)
{
    printf("Enter the value of base:");
    scanf("%f",&base);
    printf("Enter the value of height:");
    scanf("%f",&height);
}
void