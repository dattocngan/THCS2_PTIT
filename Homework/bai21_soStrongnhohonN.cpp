#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d", &n);
	if( n > 1 ) printf("1 ");
	if( n > 2 ) printf("2 ");
	if( n > 145 ) printf("145 ");
	if( n > 40585 ) printf("40585");
	return 0;
}

