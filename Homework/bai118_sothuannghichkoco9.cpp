#include<stdio.h>
#include<math.h>
#include<string.h>

int isThuanNghich(long long n) {
    int a[20];
    int dem = 0, i;
    do {
        a[dem++] = (n % 10);
        if( n % 10 == 9 ) return 0;
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
	int n;
	scanf("%d",&n);
	int count = 0;
	for( int i = 2 ; i < n ; i++ ){
		if(isThuanNghich(i) == 1){
			count++;
			printf("%d ",i);
		} 
	}
	printf("\n%d",count);
	return 0;
}

