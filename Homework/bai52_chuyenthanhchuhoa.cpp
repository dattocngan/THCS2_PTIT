#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char a[100];
	gets(a);
	int i;
	for( i = 0 ; i < strlen(a) ; i++ ){
		if( a[i] <= 'Z' ) printf("%c",a[i]);
		else printf("%c", a[i] - 32);
	}
	return 0;
}

