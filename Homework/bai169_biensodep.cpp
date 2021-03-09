#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[20];
		gets(a);
		int checkTangDan = 0 , checkBangNhau = 0, checkBangNhau1 = 0, check68 = 0;
		for(int i = 6 ; i < strlen(a) ; i++ ){
			if( i == 9 ) continue;
			if( i > 6 ){
				if(a[i] <= a[i-1]) checkTangDan++;
			}
			if( i == 10 ){
				if( a[i] != a[i-2] ) checkBangNhau++;
			}else{
				if(a[i] != a[i-1] ) checkBangNhau++;
			}
			if( i > 6 && i <= 8 ){
				if(a[i] != a[i-1]) checkBangNhau1++;
			}
			if( i == 11 ){
				if(a[i] != a[i-1]) checkBangNhau1++;
			}
			if(a[i] != 54 && a[i] != 56) check68++;
		}
		if(checkTangDan == 0 || checkBangNhau == 0 || checkBangNhau1 == 0 || check68 == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

