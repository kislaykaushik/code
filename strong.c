#include<stdio.h>
int main()
{int d,i,x,n,fac,sum=0;
printf("enter the number= ");
scanf("%d",&x);
n=x;
while(n>0)
{d=n%10;
fac=1;
for(i=d;i>0;i--)
{
fac=fac*i;
}sum=sum+fac;
n=n/10;
}
printf("%d\n",sum);
if(sum==x)
{printf("number is strong");
}
else
{printf("number is not strong");
}
return 0;
}
