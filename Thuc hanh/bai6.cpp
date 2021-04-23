#include<stdio.h>

int main(){
	int day;
	scanf("%d",&day);
	int year=0, week=0;
	while( day >= 365 ){
		year++;
		day -= 365;
	}
	if( day >= 7 ){
		week = day / 7;
		day = day % 7;
	}
	printf("%d %d %d",year,week,day);
	return 0;
}
