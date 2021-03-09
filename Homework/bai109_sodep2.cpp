#include<stdio.h>
#include<math.h>
#include<string.h>


int dauCuoi(char a[]){
	if( a[0] == '8' && a[strlen(a)-1] == '8' ) return 1;
	return 0;
}

int isThuanNghich(char a[]) {
    for ( int i = 0; i < (strlen(a)/2); i++) {
        if (a[i] != a[(strlen(a) - i - 1)]) {
            return 0;
        }
    }
    return 1;
}

int tongChuSo(char a[]){
	int sum = 0;
	for( int i = 0 ; i < strlen(a) ; i++ ){
		sum += (a[i] - '0');
	}
	if( sum % 10 == 0 ) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[500];
		gets(a);
		if( dauCuoi(a) == 1 ){
			if(isThuanNghich(a) == 1 ){
				if(tongChuSo(a) == 1 ){
					printf("YES\n");
				}else printf("NO\n");
			}else printf("NO\n");
		}else printf("NO\n");
	}
	return 0;
}

