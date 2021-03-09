#include<stdio.h>
#include<math.h>
#include<string.h>

int isThuanNghich(long long n) {
    int a[20];
    int dem = 0, i;
    do {
        a[dem++] = (n % 10);
        n = n / 10;
    } while (n > 0);
    for (i = 0; i < (dem/2); i++) {
        if (a[i] != a[(dem - i - 1)]) {
            return 0;
        }
    }
    return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(isThuanNghich(n) == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

