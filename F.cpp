#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e6+5;

int a[N],f[N];
signed main() {
	int n,m;
	scanf("%lld %lld", &n, &m);
	for(int i = 1; i<=n;i++) scanf("%lld", &a[i]);
	while(m--) {
		int l,r,v;
		scanf("%lld %lld %lld", &l,&r,&v);	
		f[l] +=v;
		f[r+1] -=v;
	}
	//for(int i = 1; i <= n;i++) printf("%lld ", f[i]);
	int res = 0;
	for(int i = 1; i <=n;i++) {
		res += f[i];
		a[i] += res;
	}
	for(int i = 1; i <= n; i++) printf("%lld ", a[i]);

}
