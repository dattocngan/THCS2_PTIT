#include<stdio.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
int main()
{
  char s[100];
  gets(s);
  for(int i=0;i<strlen(s);i++)
  {
  	if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
  }
  int pos;
  if(s[0]!=' ')
  {
  	printf("%c",s[0]);
  	for(int i=0;i<strlen(s);i++)
    {
  	if(s[i]==' '&&s[i+1]!=' ') {printf("%c",s[i+1]);pos=i;}
    }
    for(int i=pos+2;i<strlen(s);i++) printf("%c",s[i]);
    printf("@ptit.edu.vn");
  }
  else
  {
  	for(int i=0;i<strlen(s);i++)
    {
  	if(s[i]==' '&&s[i+1]!=' ') {printf("%c",s[i+1]);pos=i;}
    }
    for(int i=pos+2;i<strlen(s);i++) printf("%c",s[i]);
    printf("@ptit.edu.vn");
  }
  return 0;
}
