#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;

int a[N];
signed main() {
	int t;
	scanf("%lld", &t);
	while(t--) {
		int n,b;
		scanf("%lld %lld", &n, &b);
		for(int i = 1; i <= n; i++) scanf("%lld", &a[i]);
		int res = 1e18+5;
		for(int i = 1; i <= n; i++) {
			if(b%a[i]==0) {
				res = 0;
				break;
			}
			else {
				int x = b/a[i]+1;
				int y = x*a[i] - b;
				res = fmin(res,y);
			}
		}
		printf("%lld\n", res);
	}
}