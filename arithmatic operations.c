#include<stdio.h>
void main()
{
	int a, b, S,D,P,Q,R;
	a = 10;
	b = 2;
	S = a+b;
	D = a-b;
	P = a*b;
	Q = a/b;
	R = a%b;
	printf("sum of %d and %d = %d",a ,b,S);
	printf("\ndifference of %d = %d",a,b,D);
	printf("\nproduct of %d and %d = %d",a,b,P);
	printf("\nquotient of %d and %d = %d", a, b, Q);
	printf("\nremainder of %d and %d = %d", a, b, R);
}
