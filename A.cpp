#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e6+5;

int uoc(int a, int b) {
	while(a != 0) {
		int res = a;
		a = b%a;
		b = res;
	}
	return b;
}
int a[N], b[N];
signed main() {
	int n;
	scanf("%lld", &n);

	for(int i = 1; i<=n;i++) scanf("%lld", &a[i]);
	
	int cnt = 0;
	for(int i = 1; i < n; i++) 
		for(int j = i+1; j <=n;j++) 
			 if(uoc(a[i],a[j]) == 1) cnt++;
	printf("%lld", cnt);

}