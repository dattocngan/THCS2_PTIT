#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while( t-- ){
		long long n , i;
		scanf("%lld",&n);
		long long a[n] , check = 0 , max;
		for( i = 0 ; i < n ; i++ ){
			scanf("%lld",&a[i]);
			if( a[i] > 0 ) check++;
			if( i == 0 ) max = a[0];
			else if( max < a[i] ) max = a[i];
		}
		if( check == 0 ){
			printf("%lld",max);
		}else{
			long long tong = 0 , ketqua = a[0];	
			for( i = 0 ; i < n ; i++ ){
				if( tong + a[i] < 0 ){
					tong = 0;
					continue;
				}
				tong += a[i];
				if(tong > ketqua) ketqua = tong;
			}
			printf("%lld",ketqua);
		}
		printf("\n");
	}
	return 0;
}
