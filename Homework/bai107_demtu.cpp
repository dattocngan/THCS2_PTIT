#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while( t-- ){
		char a[200];
		gets(a);
		int i, count = 1;
		for( i = 0 ; i < strlen(a) - 1 ; i++ ){
			if( a[i] == ' ' && a[i+1] != ' '){
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}

