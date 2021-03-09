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
	if( a <= 6 && b >= 6 ) printf("6 ");
	if( a <= 28 && b >= 28 ) printf("28 ");
	if( a <= 496 && b >= 496 ) printf("496 ");
	if( a <= 8128 && b >= 8128 ) printf("8128");
	return 0;
}

