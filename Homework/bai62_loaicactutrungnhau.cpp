#include<stdio.h>
#include<math.h>
#include<string.h>

int check(int start,int count, char a[]){
	int i,j, kiemtra;
	for( i = 0 ; i < start ; i++ ){
		kiemtra = 0;
		if(a[i-1] == ' ' || i == 0 ){
			if(a[i] == a[start]){
				int k = i;
				for(j = start; j < start + count ; j++ ){
					if(a[j] != a[k++] ){
						kiemtra++;
					} 
				}
				if( kiemtra == 0 ) return 0;
			}
		}
		
	}
	return 1;
}

int main(){
	char a[100];
	gets(a);
	int i,count,j;
	for( i = 0 ; i < strlen(a) ; i++ ){
		count = 0;
		int start = i;
		while(a[i] != ' ' && i < strlen(a) ){
			count++;
			i++;
		}
		if(check(start,count,a) == 1){
			for( j = start ; j < start + count ; j++ ){
				printf("%c",a[j]);
			}
			if( i < strlen(a) ){
				printf(" ");
			}	
		}
	}
	return 0;
}

