#include <stdio.h>
#include <stdlib.h>

int m(int a,int b ) {
int n=0,i;
if(a==0 || b == 0 )
return 0;
else
{
	for(i=0;i<b;i++)
	{
	n=n+a;
	}
return n;
}
}

void d(int a,int b){

int i,f=0,q=0,r=0,g=0,s,e=0;
if(b==0)
{
printf("infinite");
exit(0);
}
if(a>b) 
{
	for(i=0;i<=a;)
	{
	i=i+b;
	f++;
	}
f--;
	for(i=0;i<f;i++)
	{
	q=q+b;
	}
q=a-q;
r = m(q,10);
	for(i=0;i<=r;)
	{
	i = i+b;
	g++;
	}
g--;
printf("answer %d . %d",f,g);
}
else
{
s = m(a,10);
	for(i=0;i<=s;)
	{
	i=i+b;
	e++;
	}
e--;
printf("answer 0. %d",e);
}
}
int main() {
int a,b,y;
char u;
printf("enter d for division and m for multiplication");
scanf("%c",&u);
printf("enter 2 numbers ");
scanf("%d %d",&a,&b);
if(u=='d')
d(a,b);
else
{
y = m(a,b);
printf("answer %d",y);
}
return 0;
}
