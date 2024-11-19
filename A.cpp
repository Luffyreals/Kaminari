#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//#define int long long

const int N = 1e6+5;


int cmp(const void*a, const void*b) {
	return *(int*)a - *(int*)b;
}
int gcd(int a, int b) {
	while(a!=0) {
		int tmp = a;
		a = b%a;
		b = tmp;
	}
	return b;
}
int c[N];
signed main() {
	int t; scanf("%d", &t);
	while(t--) {
		int n,a,b;
		scanf("%d %d %d", &n,&a,&b);
		for(int i =1 ;i<=n;i++) scanf("%d", &c[i]);
	
			int res = gcd(a,b);
			for(int i = 1; i <= n; i++) 
				c[i] %= res;
			qsort(c,n+1,sizeof(int),cmp);
			int minn = c[n]-c[1];
			for(int i = 1; i <= n-1; i++) {
				minn = fmin(minn, c[i]+res-c[i+1]);
			}
			printf("%d\n", minn);
		

			
		}
	}


