//Write a program to find the distance between 2 points
#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
    input(&x1,&y1,&x2,&y2);
    distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
}
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the x1:");
    scanf("%d",x1);
    printf("Enter the y1:");
    scanf("%d",y1);
    printf("Enter the x2:");
    scanf("%d",x2);
    printf("Enter the y2:");
    scanf("%d",y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    float x;
    x=sqrt[(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)];
    return x;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between point (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
}