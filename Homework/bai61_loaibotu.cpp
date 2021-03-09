#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char a[100], b[100];
	gets(a);
	gets(b);
	int i,j,check;
	for( i = 0 ; i < strlen(a) ; i++ ){
		check = 0;
		if( i == 0 || a[i-1] == ' ' ){
			if(a[i] == b[0]){
				int k = i;
				for( j = 0 ; j < strlen(b) ; j++ ){
					if(b[j] == a[k++]){
						check++;
					}else break;
				}
			}
		}
		if( check < strlen(b) ) printf("%c",a[i]);
		else i += strlen(b);
	}
	return 0;
}

