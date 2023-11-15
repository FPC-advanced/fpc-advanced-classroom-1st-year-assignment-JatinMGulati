/* Write a program to find the weight of a camel, given height, length and stomach radius using four functions.

> `weight = pi * stomach_radius^3 * sqrt(height * length)`*/
#include <stdio.h>
#include <math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
    float radiur,height,length,weight=0;
    input_camel_details(&radius,&height,&length);
    weight=find
}
