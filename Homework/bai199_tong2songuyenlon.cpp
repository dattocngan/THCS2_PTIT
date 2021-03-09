#include <stdio.h>
#include <string.h>

void dao(char a[], int n)
{
     int i;
     for(i = 0; i <= (n - 1)/2; i++)
     {
	     char temp = 0;
	     temp = a[i];
	     a[i] = a[n - i - 1];
	     a[n - i - 1] = temp;
     }
}

void print(char a[], int n)
{
     int i;
     for(i = n - 1; i >= 0; i--)
	     printf("%c", a[i]);
}



void  t_tong(char a[],char b[],  char tong[])
{
     int i,k;
     for(i = 0; i < 1000; i++)
         tong[i] = 0;
         
    if(strlen(a) > strlen(b)) for(i = strlen(b); i < strlen(a); i++) b[i] = '0';
    if(strlen(b) > strlen(a)) for(i = strlen(a); i < strlen(b); i++) a[i] = '0';
                 
     int nho = 0;
     if(strlen(a) >= strlen(b)) k = strlen(a);
        else k = strlen(b);
       
     for(i = 0; i < k; i++)
     {
         tong[i] = ((a[i] - 48) + (b[i] - 48) + nho)%10 + 48;
         nho = ((a[i] - 48) + (b[i] - 48) + nho)/10;
     }

     if(nho > 0) tong[strlen(a)] = nho + 48;   
}   



int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while( t-- ){
		int i;
	    char a[1000]="", b[1000]="",tong[1000]="";
	    gets(a);
	    gets(b);
	    dao(a, strlen(a));    
	    dao(b, strlen(b)); 
	    t_tong(a, b, tong);
	    print(tong, strlen(tong));
	    printf("\n");
	}
    return 0;
}
