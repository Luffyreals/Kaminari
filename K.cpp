#include<stdio.h>
#include<math.h>
#include<stdlib.h>


const int N = 1e6+5;

int ss(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

int a[N] , b[N];
signed main() {
	int n;
	scanf("%d", &n);
	for(int i = 0; i<n;i++) scanf("%d", &a[i]);
	qsort(a,n,sizeof(int),ss);
	for(int i = 0;i < n; i++) b[i] = b[i-1]+a[i];
	for(int i = 1; i < n; i++) {
		if(b[i-1] > a[i]) return printf("No"), 0;
	}
	printf("YES");
}