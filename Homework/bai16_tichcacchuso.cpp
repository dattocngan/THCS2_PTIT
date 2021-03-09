#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char n[9];
	gets(n);
	int i , tich = 1;
	for( i = 0 ; i < strlen(n) ; i++ ){
		tich *= (n[i]-'0');
	}
	printf("%d",tich);
	return 0;
}

