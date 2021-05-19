#include<stdio.h>
#include<string.h>

int check(char a[]){
	int tong = 0;
	for(int i = 0 ; i <= strlen(a)/2 ; i++){
		if(a[i] != a[strlen(a)-i-1]) return 0;
		if((a[i]-'0') % 2 == 0 || (a[strlen(a)-i-1]-'0') % 2 == 0) return 0;
		if(i == strlen(a)-i-1){
			tong += (a[i]-'0');
		}
		else tong += (a[i]-'0') + (a[strlen(a)-i-1]-'0');
	}
	if(tong % 2 == 0) return 0;
	else return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[100];
		gets(a);
		if(check(a) == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

