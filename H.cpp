#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e6+5;

int a[N],f[N];
signed main() {
	int n,m;
	scanf("%lld", &n);
	for(int i = 1; i<=n;i++) scanf("%lld", &a[i]);
	for(int i = 1; i <= n; i++) f[i] = f[i-1] + a[i];
	int maxx = a[1];
	int res = 0;
	for(int i = 2; i <= n; i++) {
		maxx += a[i];
		if(maxx < a[i]) maxx = a[i];
		if(res < maxx) res = maxx;
	}
	printf("%lld", res);
	return 0;
	
}