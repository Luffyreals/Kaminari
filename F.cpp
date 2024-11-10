#include <stdio.h>

int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	
	double a,b;
	scanf("%lf %lf", &a, &b);
	if(a == 0) {
		if(b == 0) printf("ALL");
		else printf("INVALID");
	} else {
		double x = -b/a;
		//cout << fixed << setprecision(8) << x << endl;
		printf("%.8f\n",x);
	}
	return 0;
}