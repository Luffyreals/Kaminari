#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define int long long

const int N = 1e6+5;

signed main() {
	int n; scanf("%lld", &n);
	if(n%2!=0) {
	for(int i = 1; i <= n/2; i++){
		for(int j = 1;j <=i; j++) printf("*");
		for(int j = 1;j <=n-2*i; j++) printf(" ");
		for(int j = 1;j <=i; j++) printf("*");
		printf("\n");
	}
	for(int i =1; i <=n; i++) printf("*");
	printf("\n");
	for(int i = n/2; i >= 1; i--){
		for(int j = 1;j <=i; j++) printf("*");
		for(int j = 1;j <=n-2*i; j++) printf(" ");
		for(int j = 1;j <=i; j++) printf("*");
		printf("\n");
	}
	} else {
			for(int i = 1; i <= n/2; i++){
		for(int j = 1;j <=i; j++) printf("*");
		for(int j = 1;j <=n-2*i; j++) printf(" ");
		for(int j = 1;j <=i; j++) printf("*");
		printf("\n");
	}
	
	for(int i = n/2; i >= 1; i--){
		for(int j = 1;j <=i; j++) printf("*");
		for(int j = 1;j <=n-2*i; j++) printf(" ");
		for(int j = 1;j <=i; j++) printf("*");
		printf("\n");
	}
 }
}
