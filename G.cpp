#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e6+5;

int a[N], f[N], b[N];
signed main() {
	int t;
	scanf("%lld", &t);
	while(t--) {
		int k,n;
		scanf("%lld %lld", &k, &n);
		for(int i = 0; i<n;i++) scanf("%lld", &a[i]);
		int sum = 0, cnt = 0;
		for(int i = 0; i < k; i++) b[i] = 0;
		b[0] = 1;
		
		for(int i = 0; i < n;i++) {
			sum += a[i];
			int res = sum%k;
			cnt += b[res];
			b[res]++;
		//		printf("%lld\n", cnt);
			}
		printf("%lld\n", cnt);
	}
	return 0;
}
	
