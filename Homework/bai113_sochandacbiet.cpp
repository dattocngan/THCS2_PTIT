#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[100];
		gets(a);
		if((a[strlen(a)-1]-'0') % 2 == 0){
			int check = 0;
			for(int i = 0; i < strlen(a) ; i++){
				if((a[i] - '0') % 2 != 0){
					check++;
					break;
				}
			}
			if(check == 0) printf("YES\n");
			else printf("NO\n");
		}else printf("NO\n");
	}
	return 0;
}

