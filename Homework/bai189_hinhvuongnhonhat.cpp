#include<stdio.h>
#include<math.h>

int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int a = abs(x1-x3), b = abs(x1-x4), c = abs(y1-y3) , d = abs (y1-y4);
	int e = abs(x2-x3), f = abs(x2-x4), g = abs(y2-y3) , h = abs (y2-y4);
	int x = abs(x1-x2), y = abs(x3-x4) , z = abs(y1-y2) , t = abs(y3-y4);
	int max = 0;
	if(a > max) max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	if(d > max) max = d;
	if(e > max) max = e;
	if(f > max) max = f;
	if(g > max) max = g;
	if(h > max) max = h;
	if(x > max) max = x;
	if(y > max) max = y;
	if(z > max) max = z;
	if(t > max) max = t;
	printf("%d",max * max);
	return 0;
}

