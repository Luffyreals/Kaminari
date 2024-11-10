#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e6+5;

int a[N], f[N];
signed main() {
	int t;
	scanf("%lld", &t);
	while(t--) {
		int n,q;
		scanf("%lld %lld", &n, &q);
		for(int i = 1; i<=n;i++) scanf("%lld", &a[i]);
		for(int i = 1; i <= n;i++) f[i] = f[i-1] +a[i];
		while(q--) {
			int l,r; scanf("%lld %lld", &l, &r);
			printf("%lld\n", f[r]-f[l-1]); 
		}
	}
	return 0;
}