#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i < n; i++) printf("*");
	for(int i = 1; i <= 3; i++) printf(" ");
	for(int i = 1; i < n; i++) printf("*");
	for(int i = 1; i <= 4; i++) printf(" ");
	for(int i = 1; i < n-1; i++) printf("*");
	printf("\n");
	for(int i = 1; i <= n-2; i++) {
		printf("*");
		for(int j = 1; j <= n-2; j++) printf(" ");
		printf("*  *");
		for(int j = 1; j <= n-2; j++) printf(" ");
		printf("*  *");
		for(int j = 1; j <= n-2; j++) printf(" ");
		printf("*\n");
	}
	for(int i = 1; i <= n-1; i++) printf("*");
	printf("   ");
	for(int i = 1; i <= n-1; i++) printf("*");
	printf("   ");
	printf("*");
	for(int i = 1; i <= n-2; i++) printf(" ");
	printf("*\n");
	for(int i = 1; i <= n-2; i++) {
		printf("*");
		for(int j = 1; j <= n+1; j++) printf(" ");
		printf("*");
		for(int j = 2; j <= i; j++) printf(" ");
		printf("*");
		for(int j = 1; j <= n-i+1; j++) printf(" ");
		printf("*");
		for(int j = 1; j <= n-2; j++) printf(" ");
		printf("*\n");
	
	}
	printf("*");
	for(int i = 1; i <=n+1; i++) printf(" ");
	printf("*");
	for(int i = 1; i <=n-2; i++) printf(" ");
	printf("*");
	for(int i = 1; i <=3; i++) printf(" ");
	for(int i = 1; i <=n-2; i++) printf("*");
	
	
	
}