#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e6+5;

int a[N];
signed main() {
	int n;
	scanf("%lld", &n);
	for(int i = 1; i<=n;i++) scanf("%lld", &a[i]);
	int cnt1 = 0,cnt2=0;
	if(a[1] != 25) return printf("NO"),0;
	cnt1++;
	int res = 0;
	for(int i = 2; i <= n;i++) {
		if(a[i] == 25) cnt1++;
		if(a[i] == 50) {
			cnt2++;
			if(cnt1 >= 1) cnt1--;
			else return printf("NO"),0;
		}
		if(a[i] == 100) {
			if(cnt2>=1) {
				if(cnt1 >= 1) {
					cnt2--;
					cnt1--;
				} else return printf("NO"),0;
			} else {
				if(cnt1 >= 3) cnt1 -=3;
				else return printf("NO"),0;
			}
		
		}
	}
	printf("YES");
}