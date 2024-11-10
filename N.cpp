#include<stdio.h>
#include<math.h>
#include <stdlib.h>
//#define int long long

const int N = 1e6+5;

int cmp(const void*a, const void*b) {
	return *(int*)a - *(int*)b;
}
int a[N];
signed main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		qsort(a,n,sizeof(int), cmp);
		int res = 0, cnt = 0;
		for(int i = 0; i < n-1; i++) {
			if(a[i] == a[i+1]) {
				cnt++;

			}
			else {
				if(cnt > 0) res += (cnt*(cnt+1)) /2;
				cnt = 0;
			}
		}
		if(cnt > 0) res += (cnt*(cnt+1))/2;
		printf("%d\n", res);
	}
}