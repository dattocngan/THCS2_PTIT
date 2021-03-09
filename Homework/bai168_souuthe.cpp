#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[1000];
		gets(a);
		int check =0, countChan=0, countLe=0;
		for(int i = 0 ; i < strlen(a) ; i++ ){
			if(a[i] < 48 || a[i] > 57 || a[0] == '0' ){
				printf("INVALID\n");
				check++;
				break;
			}
			if( (a[i] - '0') % 2 == 0 ) countChan++;
			else countLe++;
		}
		if(check == 0){
			if(strlen(a) % 2 == 0 && countChan > countLe ){
				printf("YES\n");
			}else if(strlen(a) % 2 != 0 && countChan < countLe ){
				printf("YES\n");
			}else printf("NO\n");
		}
	}
	return 0;
}

