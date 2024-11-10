#include <stdio.h>
#include <math.h>
#include <string.h>
#define int long long

const int MOD = 1e9+7;

int power(int a, int b, int mod) {
	if(b==0) return 1;
	int t = power(a,b/2,mod);
	t = (t*t) % mod;
	if(b % 2 == 1) t = (t*a)%mod;
	return t;
}

signed main() {
	int a, n;
	scanf("%lld %lld", &a,&n);
	if(a==1) return printf("%lld", (n+1) % MOD), 0;
	int up = (power(a,n+1, MOD)-1 + MOD) % MOD;
	int down = (a-1 + MOD) % MOD;
	int re = power(down, MOD-2, MOD);
	int res = (up*re) % MOD;
	printf("%lld", res);
	
	return 0;

	
}