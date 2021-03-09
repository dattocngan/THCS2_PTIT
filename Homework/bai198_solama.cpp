#include<stdio.h>
#include<string.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
void xuly()
{
  char s[1005];
  scanf("%s",&s);
  ll dem=0;
  for(int i=0;i<strlen(s);i++)
  {
    if(s[i]=='I') dem++;
    if(s[i]=='V') dem+=5;
    if(s[i]=='X') dem+=10;
    if(s[i]=='L') dem+=50;
    if(s[i]=='C') dem+=100;
    if(s[i]=='D') dem+=500;
    if(s[i]=='M') dem+=1000;
    if(s[i]=='I'&&(s[i+1]=='V'||s[i+1]=='X')) dem-=2;
    if(s[i]=='X'&&(s[i+1]=='L'||s[i+1]=='C')) dem-=20;
    if(s[i]=='C'&&(s[i+1]=='D'||s[i+1]=='M')) dem-=200;
  }
  printf("%lld\n",dem);
}
int main()
{
  int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++) xuly();
  return 0;
  
}
