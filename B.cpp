#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e6+5;

int a[N];
signed main() {
	int n;
	scanf("%lld", &n);
	for(int i = 1; i<=n;i++) scanf("%lld", &a[i]);
	if(n==1) return printf("YES"),0;
	if(abs(a[1]-a[2]) != 1) return printf("NO"),0;
	int x = a[1] < a[2] ? a[1] : a[2];
	int y = a[1] > a[2] ? a[1] : a[2]; 
	for(int i = 3; i <= n;i++) {
		
	//	printf("%lld %lld %lld\n", x, y, a[i]);	
		if(a[i]-y == 1) y = a[i];
		else if(x-a[i] == 1) x = a[i];
		else if(a[i]-y != 1 && x-a[i] != 1) return printf("NO"),0;
	}

	printf("YES");
	return 0;
	
}