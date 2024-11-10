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

int ver(int b, int k) {
	for(int i =1;i <k;i++) 
		if((b*i)%k==1) return i;
	return -1;
}
signed main() {
	int t;
	scanf("%lld", &t);
	while(t--) {
		int a, x,b,k;
		scanf("%lld %lld %lld %lld", &a,&x, &b,&k);
		
		int res = power(a,x,k);
		int res2= ver(b,k);
		int ans = (res*res2) %k;
		printf("%lld\n", ans);
	
	}
	
	return 0;

	
}