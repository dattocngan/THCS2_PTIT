#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char a[100];
	gets(a);
	int i , countChar = 0, countNum = 0, countSpec = 0;
	for( i = 0 ; i < strlen(a) ; i++ ){
		if( a[i] >= 48 && a[i] <= 57 ) countNum++;
		else if( a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122 ) countChar++;
		else countSpec++;
	}
	printf("%d %d %d",countChar,countNum,countSpec);
	return 0;
}

