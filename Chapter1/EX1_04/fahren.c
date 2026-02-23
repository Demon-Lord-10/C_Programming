#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
	float fahr, celsius;
	float lower, upper, step;
	lower = 0; /* lower limit of temperatuire scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	celsius = lower;
	printf("Fahrenheit\tCelcsius\n");
	while (celsius <= upper) {
		fahr = celsius*(9.0/5.0)+32.0;
		printf("%6.1f\t\t%3.0f\n", fahr, celsius);
		celsius = celsius + step;
	}
	return 0;
}
