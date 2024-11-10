#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		for(int i = 0; i < 2*n-1;i++) {
			for(int j = 0; j < 2*n-1;j++) {
				int res1 = (i < n) ? i : 2*n-1-i-1;
				char c1 = 'a' + n - 1 -res1;
				int res2 = (j < n) ? j : 2*n-j-2;
				char c2 = 'a' + n-1-res2;
				char c = (c1 < c2) ? c1 : c2;
		//		char c = 'a' +n-1-res;
				printf("%c", c);
				
			}
			printf("\n");
		}
		printf("\n");
		
	}
	
}