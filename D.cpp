#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;


int tinh(int n, int x) {
	int cnt = 0;
	for(int a = 1; a <= x-2; a++) {
		for(int b = 1; b <= x-a-1; b++) {
			if(n-a*b < 0) break; 
			int c = fmin(x-a-b, (n-a*b)/(a+b));
			cnt+=c;


		}
	}
	return cnt;
}
signed main() {
	int t;
	scanf("%lld", &t);
	while(t--) {
		int n,x; scanf("%lld %lld", &n, &x);
		int res = tinh(n,x);
		printf("%lld\n", res);
	}
}

