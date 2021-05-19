#include<stdio.h>

long long ucln(long long a, long long b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

long long Bcnn(long long a, long long b){
	return a * b / ucln(a,b);
}

int main(){
	int t;
	scanf("%d",&t);
	for(int k = 1 ; k <= t ; k++){
		long long tu1,mau1,tu2,mau2;
		scanf("%lld%lld%lld%lld",&tu1,&mau1,&tu2,&mau2);
		long long ucln1 = ucln(tu1,mau1);
		long long ucln2 = ucln(tu2,mau2);
		tu1 /= ucln1;
		mau1 /= ucln1;
		tu2 /= ucln2;
		mau2 /= ucln2;
		printf("Case #%d:\n",k);
		long long bcnn = Bcnn(mau1,mau2);
		tu1 *= (bcnn/mau1);
		tu2 *= (bcnn/mau2);
		mau1 = bcnn;
		mau2 = bcnn;
		printf("%lld/%lld %lld/%lld\n",tu1,mau1,tu2,mau2);
		long long tutong = tu1 + tu2, mautong = bcnn;
		long long uclnTong = ucln(tutong,mautong);
		tutong /= uclnTong;
		mautong /= uclnTong;
		printf("%lld/%lld\n",tutong,mautong);
		long long tuThuong = tu1 / ucln(tu1,tu2), mauThuong= tu2 / ucln(tu1,tu2);
		printf("%lld/%lld\n",tuThuong,mauThuong);
	}
	return 0;
}

