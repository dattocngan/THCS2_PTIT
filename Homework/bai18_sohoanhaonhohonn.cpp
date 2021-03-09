#include<stdio.h>
#include<math.h>
#include<string.h>



int main(){
	int n;
	scanf("%d",&n);
	int i;
	if( n > 6 ) printf("6 ");
	if( n > 28 ) printf("28 ");
	if( n > 496 ) printf("496 ");
	if( n > 8128 ) printf("8128");
	return 0;
}

