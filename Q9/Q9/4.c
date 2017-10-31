//#include <stdio.h>
//#include <stdlib.h>
//#include <process.h>
//#include <math.h>
//
//typedef struct {
//	float x, y;
//} POINT;
//
//float distance(POINT a, POINT b);
//POINT midpoint(POINT a, POINT b);
//
//void main()
//{
//	POINT a = { 1, 1 }, b = { 2, 2 }, mid;
//
//	printf("%.2f\n", distance(a, b));
//	mid = midpoint(a, b);
//	printf("(%.2f, %.2f)\n", mid.x, mid.y);
//}
//
//float distance(POINT a, POINT b)
//{
//	return sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
//}
//
//POINT midpoint(POINT a, POINT b)
//{
//	POINT mid;
//	mid.x = (a.x + b.x) / 2;
//	mid.y = (a.y + b.y) / 2;
//
//	return mid;
//}
