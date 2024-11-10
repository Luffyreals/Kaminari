#include <stdio.h>
#include <math.h>


int main() {
	double a, b;
	int c;
	scanf("%lf %lf %d", &a ,&b ,&c);
	double res = -a*b;
	double v;
	if(c == -150) v = res*(-0.5);
    else if (c == -135) v = res*(-sqrt(2)/2);
    else if (c == -120) v = res*(-sqrt(3)/2);
    else if (c == -60) v = res*(-sqrt(3)/2);
    else if (c == -45) v = res*(-sqrt(2)/2);
    else if (c == -30) v = res*(-0.5);
    else if(c ==  150) v = res*(0.5);
    else if (c == 135) v = res*(sqrt(2)/2);
    else if (c == 120) v = res*(sqrt(3)/2);
    else if (c == 60) v = res*(sqrt(3)/2);
    else if (c == 45) v = res*(sqrt(2)/2);
    else if (c == 30) v = res*(0.5);
    printf("%.4lf", v);
	return 0;
}