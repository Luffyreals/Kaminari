#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e3+5;

int a[N][N], b[N][N];

signed main() {
	int n;
	scanf("%lld", &n);

	for(int i = 1; i <=n;i++)
		for(int j =1;j<=n;j++) scanf("%lld", &a[i][j]);
	
	
	// for(int i = 1; i <= n;i++) 
		// for(int j = 1; j <=n; j++) 
			// if(i == j || i == n-j+1) a[i][j] = 0; 
		
		
	for(int i = 1; i <= n;i++) 
		for(int j = 1; j <=n; j++) b[i][j] = 0;
	for(int i = 1; i <= n;i++) {
		for(int j = 1; j <=n; j++){
			if(i <= n/2 && j >= i && j < n-i) b[i][j] = a[i][j+1];
		 	else if(j <= n/2 && i > j && i <= n-j) 	b[i][j] = a[i][j];
			else if(i >= n/2+1 && j > n-i && j <= i) b[i][j] = a[i+1][j];
			else b[i][j] =a[i+1][j+1];
		}
	}
	
	
	for(int i = 1; i <= n-1;i++) {
		for(int j = 1; j <=n-1; j++)  {
			printf("%lld ", b[i][j]);
		}
		printf("\n");
	}
}
