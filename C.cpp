#include <stdio.h>

const long long N = 1e18+5;
int main() {
	
	long long x,t,n;
 	scanf("%lld %lld %lld", &x, &t, &n);
	long long res = 1;
	long long cnt =0;
	while (res < n) {
		if(res > N/x)
			res = n;
		else res *= x;
		cnt++;
	}
	  printf("%lld\n", cnt * t);
	return 0;
} //	int ans = ceil(log(b)/log(a));