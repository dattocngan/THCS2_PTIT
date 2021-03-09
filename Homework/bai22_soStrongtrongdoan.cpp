#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	if( a > b ){
		int temp = a;
		a = b;
		b = temp;
	}
	if( a <= 1 && b >= 1 ) printf("1 ");
	if( a <= 2 && b >= 2 ) printf("2 ");
	if( a <= 145 && b >= 145 ) printf("145 ");
	if( a <= 40585 && b >= 40585 ) printf("40585");
	return 0;
}

