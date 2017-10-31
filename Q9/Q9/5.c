#include <stdio.h>
#include <math.h>

typedef struct {
	double real;
	double imag;
} COMPLEX;

void main()
{
	COMPLEX x, y, result_multi;

	printf("x : ");
	scanf("%lf %lf", &x.real, &x.imag);
	printf("y : ");
	scanf("%lf %lf", &y.real, &y.imag);

	result_multi.real = ((x.real * y.real) - (x.imag * y.imag));
	result_multi.imag = ((x.real * y.imag) + (x.imag * y.real));

	printf("%.lf %.lf\n", result_multi.real, result_multi.imag);
}
