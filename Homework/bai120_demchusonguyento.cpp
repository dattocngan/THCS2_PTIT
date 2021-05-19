#include<stdio.h>
#include<math.h>
#include<string.h>

int checkPrime(char a){
	int n = a - '0';
	if( n <= 1 ) return 0;
	if( n == 2 ) return 1;
	int i;
	for( i = 2 ; i <= sqrt(n) ; i++ ){
		if( n % i == 0 ) return 0;
	}
	return 1;
}

int main(){
	char a[100];
	gets(a);
	int b[strlen(a)];
	for(int i = 0 ; i < strlen(a) ; i++){
		b[i] = 1;
	}
	for(int i = 0 ; i < strlen(a) ; i++){
		if(checkPrime(a[i]) == 0) b[i] = 0;
		else if(b[i] != 0){
			for(int j=i+1; j < strlen(a); j++){
				if(a[i]==a[j]){
					b[i]++;
					b[j] = 0;
				}
			}
		}
	}
	for(int i = 0 ; i < strlen(a) ; i++){
		if(b[i] == 0) continue;
		printf("%c %d\n",a[i],b[i]);
	}
	return 0;
}

