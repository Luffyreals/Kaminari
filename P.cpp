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
	int n;
	scanf("%d", &n);
	for(int i = 0; i <2*n;i++) scanf("%d", &a[i]);
	qsort(a,2*n,sizeof(int), cmp);
	int ans = 50005;
	for(int i = 0; i < 2*n;i++) {
		for(int j = 0; j < 2*n; j++) {
			int res = 0;
			int b[2*n] = {0};
			b[i] = 1;
			b[j] = 1;
			for(int k = 0; k < 2*n; k++) {
				if(b[k]) continue;
				for(int l = k+1; l < 2*n;l++) {
					if(!b[l]){
					res += abs(a[k] - a[l]);
					b[k] = 1;
					b[l] = 1;
					break;
					}
				}
			}
			ans = fmin(ans, res);
			
		}
	}
	printf("%d", ans);
}