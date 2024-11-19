#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e3+5;

int a[N][N],b[N][N], c[N][N];
signed main() {
	int n;
	scanf("%lld", &n);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <=2*i-1;j++){
			scanf("%lld", &a[i][j]);
		}
	}
	int k;
	scanf("%lld", &k);
	int x = 1, y = 1;

	for(int i = 1; i <= n; i++) {
			for(int j = 2*i-1; j>= 1; j--) {
				if(j <= 2) b[n][x++] = a[i][j];
				else if(j == 2*n-1) b[1][1] = a[i][2*n-1];
				else {
					int t = (j%2==0) ? j/2-1 : j/2; 
					b[n-t][2*i-j] = a[i][j];
				}	
			}
		}

	for(int i = 1; i <= n; i++) {
		for(int j = 2*i-1; j>= 1; j--) {
			if(j <= 2) c[n][y++] = b[i][j];
			else if(j == 2*n-1) c[1][1] = b[i][2*n-1];
			else {
				int t = (j%2==0) ? j/2-1 : j/2; 
				c[n-t][2*i-j] = b[i][j];
			}	
		}
	}	
		
		
	if(k==-1) {
		for(int i = 1; i <=n;i++){
			for(int j = 1; j <= 2*i-1; j++) {
				printf("%lld ", b[i][j]);
			}
			printf("\n");
		}
	} else if(k==1) {
		for(int i = 1; i <=n;i++){
			for(int j = 1; j <= 2*i-1; j++) {
				printf("%lld ", c[i][j]);
			}
			printf("\n");
		}
	}
	
	
}