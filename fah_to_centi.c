#include <stdio.h>

/*print Fahrenheit - Celcius table
 * for fahr = 0, 20, 40, ... 300; floating point version */
main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= upper){
		celcius = (5.0/9.0)*(fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr += step;
	}
}