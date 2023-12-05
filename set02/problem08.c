#include <stdio.h>

struct _triangle {
	float base, altitude, area;
}
typedef struct _triangle Triangle;

int main() 
{
	int n=input_n();
	Triangle t[n];
	input_n_triangles(n,t);
	find_n_areas(n,t);
	Triangle smallest = find_smallest_triangle(n,t);
	output(n,t,smallest);
	return 0;
}

int input_n() 
{
	int n;
	printf("Enter the number of triangles: ");
	scanf("%d",&n);
	return n;
}

Triangle input_triangle() {
	Triangle t;
	printf("Enter the base, altitude of the triangle: ");
	scanf("%f %f",&t.base,&t.altitude);
	return t;
}

void input_n_triangles(int n, Triangle t[n]) {
	for (int i = 0; i < n; i++) {
		t[i] = input_triangle();
	}
}

void find_area(Triangle *t) {
	t->area = 0.5 * t->base * t->altitude;
}

void find_n_areas(int n, Triangle t[n]) {
	for (int i = 0; i < n; i++) {
		find_area(&t[i]);
	}
}

Triangle find_smallest_triangle(int n, Triangle t[n]) {
	Triangle smallest = t[0];
	for (int i = 1; i < n; i++) {
		if (t[i].area < smallest.area) {
			smallest = t[i];
		}
	}
	return smallest;
}

void output(int n, Triangle t[n], Triangle smallest) {
	printf("The triangle with the smallest area is:\n");
	printf("Base: %.2f\nAltitude: %.2f\nArea: %.2f\n", smallest.base, smallest.altitude, smallest.area);
}
