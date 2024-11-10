#include <stdio.h>
#include <math.h>
int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	
	double a,b,c;
	scanf("%lf %lf %lf", &a,&b,&c);
	double res = (a+ b*2 + c*7)/10;
	if(res >= 8) printf("GIOI\n");
	else if (res < 8 && res >= 6.5) printf("KHA\n");
	else if (res <6.5 && res >= 5) printf("TRUNG BINH\n");
	else if (res < 5) printf("YEU\n");
	return 0;
}