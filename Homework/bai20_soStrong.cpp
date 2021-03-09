#include<stdio.h>
#include<math.h>
#include<string.h>

int giaiThua(int n){
	int i;
	int tich = 1;
	for( i = 1 ; i <= n ; i++ ){
		tich *= i;
	}
	return tich;
}

int main(){
	char n[7];
	gets(n);
	int i, sum = 0,m = 0 , j = 1;
	for( i = strlen(n) - 1 ; i >= 0 ; i-- ){
		int a = n[i] - '0';
		sum += giaiThua(a);
		m += a * j;
		j *= 10;
	}
	
	if( sum == m ) printf("1");
	else printf("0");
	return 0;
}

