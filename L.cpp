#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e6+5;

int a[N];
signed main() {
	int t; scanf("%lld", &t);
	while(t--) {
		int n,k;
		scanf("%lld %lld", &n, &k);
		for(int i = 1; i<=n;i++) scanf("%lld", &a[i]);
		int cnt = 0;
		for(int i = 1; i <= n; i++) 
			if(a[i] <= k) cnt++;
		
		int res = 0;
		for(int i = 1; i <= cnt; i++) if(a[i] > k) res++;
		int ans = res;
		for(int i = cnt+1, j=1; i <= n; i++,j++) {
			if(a[i] > k) res++;
			if(a[j] > k) res--;
			ans = (ans < res) ? ans : res;
			
		} 
		// printf("%lld\n", cnt);
		// for(int i = 1; i<=n; i++) printf("%lld ", b[i]);
		printf("%lld\n", ans);
	}
}