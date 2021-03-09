#include<stdio.h>
#include<math.h>
#include<string.h>

int checkChan(char a[]){
	for(int i = 0 ; i < strlen(a) ; i++ ){
		if( (a[i] - '0') % 2 != 0 ) return 0;
	}
	return 1;
}

int isThuanNghich(char a[]) {
    for ( int i = 0; i < (strlen(a)/2); i++) {
        if (a[i] != a[(strlen(a) - i - 1)]) {
            return 0;
        }
    }
    return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[500];
		gets(a);
		if( checkChan(a) == 1 ){
			if(isThuanNghich(a) == 1 ) printf("YES\n");
			else printf("NO\n");
		}else printf("NO\n");
	}
	return 0;
}

