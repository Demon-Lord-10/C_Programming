#include <stdio.h>
int convert(int x){
	return(5 * (x-32) / 9);
}
int main()
{
int fahr, celsius;
int lower, upper, step;
lower = 0;
upper = 300; 
step = 20; 
fahr = lower;
while (fahr <= upper) {
printf("%d\t%d\n", fahr, convert(fahr));
fahr = fahr + step;
}
}
