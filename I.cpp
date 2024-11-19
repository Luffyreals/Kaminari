#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;

int a[N];
signed main() {
	int a;
	int res = 0;
	int n = 0;
	while(scanf("%lld", &a) != EOF) {
		res += a;
		n++;
	}
	printf("%lld", res-n+1);
}