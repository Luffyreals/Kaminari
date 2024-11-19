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
		int n; scanf("%lld", &n);
		for(int i = 1; i <=n ;i++) scanf("%lld", &a[i]);
		int cnt = 0;
		int res = 0;
		for(int i = 1; i <= n; i++) {
			int cnt1 = 0;
			while(a[i] > 0) {
				if(a[i]%2!=0) {
					a[i]--;
					cnt++;
				}
				else {
					a[i] /= 2;
					cnt1++;
				}
			}
			res = fmax(res, cnt1);
		}
			printf("%lld\n", res+cnt);

	}
}