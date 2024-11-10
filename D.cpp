#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e6+5;

int uoc(int a, int b) {
	while(a !=0) {
		int res = a;
		a = b%a;
		b = res;
	}
	return b;
}
int a[N],b[N];
signed main() {
	int t;
	scanf("%lld", &t);
	while(t--) {
		int n;
		scanf("%lld", &n);
		for(int i = 1; i<=n;i++) scanf("%lld", &a[i]);
		int res = abs(a[2]-a[1]);
		for(int i = 3; i <= n; i++) {
			res = uoc(res, abs(a[i]-a[i-1]));
		}
		//printf("%lld\n", res);
		int cnt = 0;
		for(int i =1; i*i <= res; i++) {
			if(res%i==0) {
				cnt++;
				if(i != res/i) cnt++;
			}
		}
		printf("%lld\n", cnt);
	}
}