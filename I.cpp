#include <stdio.h>
#include <math.h>
int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	
	long long n,k;
	scanf("%lld %lld", &n,&k);
	
	long long res = n - (n/k)*k;
	long long c = n/k;
	if(c % 2 == 0)
		printf("%lld %lld\n", k -res, res);
	else 
		printf("%lld %lld\n", res, k - res);
	return 0;
}