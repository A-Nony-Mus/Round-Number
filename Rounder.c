/*A-Nony-Mus
8 Feb. 2012
This program takes a number from the user and rounds it to the number of decimals that the user requests*/

#include <stdio.h>
#include <math.h>

double scale(double x, int n);

int main(void)
{

double inp_num,
	rounded,
	rounder;
int scalar,
	first_part,
	second_part;

printf("please input the number you would like to use ");
scanf("%lf", &inp_num);

printf("how many decimals places would you like to round to? ");
scanf("%d", &scalar);

rounder = inp_num - (int)inp_num;
rounded = scale(rounder, scalar);
first_part = (int)inp_num;
second_part = (int)rounded;    

printf("your rounded number is %d.%d\n", first_part, second_part);

return(0);
}

double
scale(double x, int n)
{
	double scale_factor,
    intermediary;
	scale_factor = pow(10, n);
    intermediary = (x + (.5 * pow(10, (-1 * n))));
	
	return (intermediary * scale_factor);
}
