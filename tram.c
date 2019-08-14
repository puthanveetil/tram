#include<stdio.h>
int main()
{
int n,a,b,d,temp,max;
scanf("%d",&n);d=0;
while(n--)
{
scanf("%d %d",&a,&b);
d=d+b-a;
if(d>max)
    max=d;}
printf("%d\n",max);
 
}