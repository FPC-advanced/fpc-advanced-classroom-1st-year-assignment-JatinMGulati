#include <stdio.h>
#include <math.h>

int main(){
    Line l = input_line();
    find_length(&l);
    output(l);

    return 0;
}

Point input_point(){
    Point p;
    printf("Enter the x and y coordinates of the point: ");
    scanf("%f %f", &p.x, &p.y);
    return p;
}

Line input_line(){
    Line l;
    printf("Enter the coordinates of the first point: ");
    l.p1 = input_point();
    printf("Enter the coordinates of the second point: ");
    l.p2 = input_point();
    return l;
}

void find_length(Line *l){
    float dx = l->p2.x - l->p1.x;
    float dy = l->p2.y - l->p1.y;
    l->distance = sqrt(dx * dx + dy * dy);
}

void output(Line l){
    printf("The length of the line from point (%.2f, %.2f) to point (%.2f, %.2f) is %.2f\n", 
           l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.distance);
}
