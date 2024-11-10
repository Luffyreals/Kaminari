#include <stdio.h>
#include <math.h>
int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	
	long long a,b;
	scanf("%lld %lld", &a,&b);
	long long x1 = a/b;
	long long x2 = a/b +1;
	long long y1 = a - x1*b;
	long long y2 = x2*b - a;
	long long y = (y1 <y2) ? y1:y2;
	if(y1 <= y2) printf("%lld = %lld * %lld + %lld\n", a, b, x1, y);
	else printf("%lld = %lld * %lld - %lld\n", a, b, x2, y);
	return 0;
}