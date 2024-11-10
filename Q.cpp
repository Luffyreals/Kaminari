#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	long long sum = 0;
	int i;
	while(scanf("%d", &i) != EOF) sum +=i;
	printf("%lld", sum);
	
}