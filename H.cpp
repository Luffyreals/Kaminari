#include <stdio.h>
#include <math.h>
int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	
	long long a,b;
	char c;
	scanf("%lld %c %lld", &a, &c, &b);
	double ans;
	if(c == '+') {
		ans = a+b;
		printf("%.0f\n",ans);
	} 
	else if (c == '-') {
		ans = a-b;
		printf("%.0f\n",ans);
	}
	else if (c == '*') {
		 ans = a*b;
		printf("%.0f\n",ans);
		}
	else if (c == '/') {
		if(b != 0) {
			ans = (double) a/b;
			printf("%.2f\n", ans);
		}
		else return 0;
	} else return 0;
	
}