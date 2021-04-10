#include<stdio.h>
#include<string.h>
int main()
{
char a[20]="peter",d[20]="sarah";
int b[26],e[26],f[26],i,j;
char c[]="abcdefghijklmnopqrstuvwxyz";
/* printf("enter name1");
scanf("%s",a);
       printf("enter name2");
scanf("%s",d);*/
       for(i=0;i<26;i++)
{
b[i]=0;
e[i]=0;
f[i]=0;
}
    int m=strlen(a);
int n=strlen(d);
strlwr(a);
strlwr(d);
for(i=0;i<26;i++)
{
for(j=0;j<m;j++)
{
if(c[i]==a[j])
{
++b[i];
}
}
}
for(i=0;i<26;i++)
{
for(j=0;j<n;j++)
{
if(c[i]==d[j])
{
++e[i];
}
}
}
for(i=0;i<26;i++)
{
f[i]= b[i]-e[i];
}
for(i=0;i<26;i++)
{
if(f[i]<0)
       {
f[i]= -f[i];
}
}
int sum=0;
for(i=0;i<26;i++)
{
sum= sum+f[i];
}
char x[]="123456",t;
int ind=6,k=0,temp=0;
j=1;
for(k=0;k<5;k++)
{
if(sum<ind)
{
temp=sum+j-1;
}
else if(sum>=ind)
{
temp=(sum+j-1)%ind;
}
if(temp>ind)
{
temp=temp%ind;
}
if(temp==ind||temp==0)
{
j=1;
ind--;
continue;
}
else
{
for(i=temp;i<ind;i++)
{
t=x[i];
x[i-1]=x[i];
x[i]=t;
}
j=temp;
ind--;
}
}
switch(x[0])
{
case '1':
printf("friends");
break;
case '2':
printf("love");
break;
case '3':
printf("affectionate");
break;
case '4':
printf("marriage");
break;
case '5':
printf("enemies");
break;
case '6':
printf("siblings");
break;
}
return 0;
}


