#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char n[20];
	scanf("%s", &n);
	int cnt = strlen(n);
	char c = n[cnt-1];
	if((c-'0')%2==0 && cnt%2==0) printf("0\n");
	else if((c-'0')%2==1 && cnt%2==1) printf("1\n");
	else printf("-1\n");
	return 0;
}