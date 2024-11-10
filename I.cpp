#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#define int long long

const int N = 1e6+5;

int f[N], b[N];
int l[N],r[N], m[N];
int dp1[N], dp2[N];

signed main() {
	int t;
	scanf("%lld", &t);
	while(t--) {
		int n;
		scanf("%lld", &n);
		for(int i = 1; i <= n; i++) scanf("%lld", &b[i]);
		for(int i = 1; i <= n-2;i++) {
			l[i] = b[i]+i; 
			r[i] = b[i+2]-i-2;
			m[i] = b[i+1];
		}

		int ans = -10005;
		dp1[n-2] = r[n-2];
		for(int i = n-3; i >= 1; i--) 
			dp1[i] = fmax(r[i], dp1[i+1]);
		
		dp2[n-2] = m[n-2] + dp1[n-2];
		for(int i = n-3; i >= 1; i--) 
			dp2[i] = fmax(m[i]+dp1[i], dp2[i+1]);
	
		for(int i = 1; i <= n-2;i++) ans = fmax(ans, l[i]+dp2[i]);
		printf("%lld\n", ans);

	 }	

	
	return 0;
}