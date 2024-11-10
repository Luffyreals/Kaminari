#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d", &n);
		if(n == 0) printf("%d\n", 0);
		else if (n%9==0) printf("%d\n", 9);
		else printf("%d\n", n%9);
		
		
	}
	return 0;
}