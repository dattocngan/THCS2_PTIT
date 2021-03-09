#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char a[100],b[100];
	gets(a);
	gets(b);
	int n;
	scanf("%d",&n);
	for(int i = 0 ; i < strlen(a) ; i++ ){
		if( i == n - 1 ){
			for(int j = 0 ; j < strlen(b) ; j++ ){
				printf("%c",b[j]);
			}
		}
		printf("%c",a[i]);
	}
	return 0;
}

