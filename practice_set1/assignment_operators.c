#include<stdio.h>
int main()
{
	int a = 5, c;

	c = a;
	printf("c is = %d\n",c);
	c += a;
	printf("c is = %d\n",c);
	c -= a;
	printf("c is = %d\n",c);
	c *= a;
	printf("c is = %d\n",c);
	c /= a;
	printf("c is = %d\n",c);
	c %= a;
	printf("c is = %d\n",c);

	return 0;
}
