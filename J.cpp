#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e6+5;

int a[N] , b[N];
signed main() {
	int n,k;
	scanf("%lld %lld", &n, &k);
	for(int i = 1; i<=n;i++) scanf("%lld", &a[i]);
	for(int i = 1; i <= n; i++) {
		int res = ((i+k) % n != 0) ? (i+k) % n : n;
		b[res] = a[i] - (i+k-1)/n;
		//printf("%lld ", res);
	
		
 	}
	 //printf("\n");
	 for(int i = 1; i <= n; i++) printf("%lld ", b[i]);
}