#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("*\n");
	for(int i = 2; i < n; i++) {
		printf("*");
		for(int j = 2; j < i; j++) 
			printf(" ");
		printf("*");
		printf("\n");
	}
	for(int i = 1; i <= 2*n-1; i++) printf("*");
	printf("\n");
	 for(int i = n-1; i >= 2; i--) {
		 for(int j = 1; j <= 2*n-i-1; j++)
		 	printf(" ");
		printf("*");
		for(int j = 2; j < i;j++) printf(" ");
		printf("*\n");
	 }
	 for(int i = 1; i <= 2*n-2; i++) printf(" ");
	 printf("*");
	return 0;
}