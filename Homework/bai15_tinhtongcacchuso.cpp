#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char n[9];
	gets(n);
	int i , sum = 0;
	for( i = 0 ; i < strlen(n) ; i++ ){
		sum += (n[i]-'0');
	}
	printf("%d",sum);
	return 0;
}

