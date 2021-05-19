#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	gets(str);
	for(int i = 0 ; i < sizeof(str) ; i++ ){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 32;
		}
	}
	puts(str);
	return 0;
}

