#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char a[9];
	gets(a);
	printf("%c %c", a[0],a[strlen(a)-1] );
	return 0;
}

