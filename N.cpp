#include <stdio.h>
#include <math.h>

int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	long long a,b,c;
	scanf("%lld %lld %lld", &a, &b, &c);
	
	if(a == 0 && b == 0 && c==0) printf("VO SO NGHIEM");
	else if(a == 0 && b == 0 && c != 0) printf("VO NGHIEM");
	else if(a == 0) printf("%.2lf",(double)-c/b);
	else {
		long long d = b*b-4*a*c;
		if(d == 0) printf("%.2lf", (double)-b/(2*a));
		else if(d < 0) printf("VO NGHIEM");
		else {
			double x1 = (double)(-b+sqrt(d))/(2*a);
			double x2 = (double)(-b-sqrt(d))/(2*a);
			if(x1 > x2) printf("%.2lf %.2lf", x1, x2);
			else printf("%.2lf %.2lf", x2, x1);
		}
	}
	return 0;
}