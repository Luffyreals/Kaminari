#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;


signed main() {
	int x1,y1,x2,y2;
	scanf("%lld %lld %lld %lld", &x1,&y1,&x2,&y2);
	int x3,y3,x4,y4;
	 if(x1==x2 && y1==y2) return printf("-1"),0;
	 if(x1 == x2) {
		x3 = x4 = x1 + abs(y2-y1);
		y3 = y1;
		y4 = y2;
			printf("%lld %lld %lld %lld",x3,y3,x4,y4);
	}
	else if (y1 == y2) {
		y3=y4= y1+ abs(x2-x1);
		x3=x1;
		x4=x2;
			printf("%lld %lld %lld %lld",x3,y3,x4,y4);
	 }
	 else if(abs(x1-x2)==abs(y1-y2)){
		x3 = x1;
		x4 = x2;
		y3 = y2;
		y4 = y1;
	    printf("%lld %lld %lld %lld",x3,y3,x4,y4);
	}
	else printf("-1");
	return 0;
}