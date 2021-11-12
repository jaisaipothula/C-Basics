#include<stdio.h>
void main()
{
	int l,b, area, perimeter;
	scanf("%d%d",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("area=%d,\nperimeter=%d",area,perimeter);
}
