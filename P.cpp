#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;

int a[N];
signed main() {
	int n;
	scanf("%lld", &n);
	int sum = 0;
	for(int i = 1; i <= n;i++) {
		scanf("%lld", &a[i]);
		sum +=a[i];
	}
	if(sum%2==0) printf("YES");
	else printf("NO");
}