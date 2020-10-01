#include<stdio.h>
int main()
{int a[100],b[100],c[100],j,i,k,n1,n2;
scanf("%d%d",&n1,&n2);
for(i=0;i<n1;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n1;i++)
{printf("%d ",a[i]);
}printf("\n");
for(i=0;i<n2;i++)
{scanf("%d" ,&b[i]);
}
for(i=0;i<n2;i++)
{printf("%d ",b[i]);
}printf("\n");
i=0;
j=0;
k=0;
while(i<n1 && j<n2)
{if(a[i]<=b[j])
{c[k]=a[i];
k++;
i++;
}
else
{c[k]=b[j];
k++;
j++;
}
}
while(i<n1)
{
    c[k]=a[i];
    i++;
    k++;

}
while(j<n2)
{
    c[k]=b[j];
    k++;
    j++;

}
for(i=0;i<n1+n2;i++)
    {printf("%d ",c[i]);
    }
    return 0;
}
