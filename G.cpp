#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;

int a[N], b[N];
signed main() {
	int t;
	scanf("%lld", &t);
	while(t--) {
		int n, m;
		scanf("%lld", &n);
		for(int i = 1; i <= n; i++) scanf("%lld", &a[i]);
		scanf("%lld", &m);
		for(int i = 1; i <= m; i++) scanf("%lld", &b[i]);
		
		int cnt = 0;
		for(int i = 1; i <= m;i++) cnt+=b[i];
		int res = cnt%n;
		printf("%lld\n", a[res+1]);
	}
}