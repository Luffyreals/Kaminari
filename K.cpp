#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;

int a[N];
signed main() {
	int n,x;
	int res = 0;
	scanf("%lld %lld", &n, &x);
	for(int i = 1; i <=n; i++) 
		scanf("%lld", &a[i]);
	for(int i = 1; i <=n; i++)	{
		int cnt = 0;
		if(a[i] > 0) cnt = x-a[i];
		else cnt = abs(a[i]);
		if(cnt > res) res = cnt;
	}
	printf("%lld", res);
}