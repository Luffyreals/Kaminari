#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e3+5;

int a[N][N], b[N][N],c[N][N];
signed main() {
	int n;
	scanf("%lld", &n);
	for(int i =1; i <= n;i++) 
		for(int j = 1; j <=n;j++)
			scanf("%lld", &a[i][j]);
	
	for(int i = 1; i <= n; i++) 
		for(int j = 1; j <=n; j++) 
			if(j <= n-i+1) 
				 b[i+j-1][j] = a[i][j];
				
	for(int i = n; i > 1; i--) {
		for(int j = 2; j <= n; j++) {
			if(j > n-i+1)
				c[j-1-n+i][n-i+1] = a[i][j];
		}
	}
	
	for(int i = 1; i <= n-1; i++) {
		for(int j = 1; j <= n-i;j++) printf(" ");
		for(int j = 1; j <= i; j++) printf("%lld ", b[i][j]);
		for(int j = 1; j <= n-i-1;j++) printf(" ");
		printf("\n");
		
	}
	for(int j = 1; j <= n-1; j++) printf("%lld ", b[n][j]);
	printf("%lld\n", b[n][n]);
	
	for(int i = 1; i <= n-1;i++) {
		for(int j = 1; j <=i; j++) printf(" ");
		for(int j=1; j <= n-i; j++) printf("%lld ", c[i][j]);
		for(int j = 1; j <=i-1; j++) printf(" ");
		printf("\n");
	}

	// for(int i = 1; i <= n; i++) {
		// for(int j = 1; j <= n; j++)
			// printf("%lld ", c[i][j]);
			// printf("\n");
			// }
// 
 }