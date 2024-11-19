#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;

int a[N];
signed main() {
    int n;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) 
        scanf("%lld", &a[i]);

    int l = 1, r = n;
    int cnt = 0;
    while(l < r) {
        if(a[l]==a[r]) {
            l++; r--;
        } else if(a[l]<a[r]) {
            a[l+1] += a[l];
            l++;
            cnt++;
        } else {
            a[r-1] += a[r];
            r--;
            cnt++;
        }
    }
    printf("%lld\n", cnt);
    return 0;
}
