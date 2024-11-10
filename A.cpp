#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double res = 0.0;
	scanf("%d", &n);
	for(int i = 1; i<=n;i++) res += 1.0/i;
	printf("%.04lf", res);
	
}