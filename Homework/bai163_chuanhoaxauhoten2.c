#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while( t-- ){
		char a[1000];
		gets(a);
		int i,check = 0;
		for( i = 0 ; i < strlen(a) ; i++ ){
			if(i == 0 && a[i] != ' ' ){
				check++;
				continue;
			}
			if(a[i] == ' ' && a[i+1] != ' '  && check < 2){
				check++;
				continue;
			}
			if(check >=2){
				if( a[i-1] == ' ' ){
				printf("%c", toupper(a[i]) );
				}else{
					printf("%c", tolower(a[i]));
				}
			} 
		}
		printf(", ");
		for( i = 0 ; i < strlen(a) ; i++ ){
			if(a[i] == ' '){
				continue;
			}else{
				printf("%c", toupper(a[i]));
				if(a[i+1] == ' ') break;
			}
		}
		printf("\n");
	}
	return 0;
}

