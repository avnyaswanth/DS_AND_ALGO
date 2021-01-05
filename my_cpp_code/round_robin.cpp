#include<stdio.h>
int main()
{
int et[30],ts,n,i,x=0,tot=0;
char pn[10][10];
printf("\n Enter the no of processes for Round Robin:");
scanf("%d",&n);
printf("\n Enter the time quantum for Round Robin:");
scanf("%d",&ts);
for(i=0;i<n;i++)
{
printf("\n Enter process name & estimated time for Round Robin:");
scanf("%s %d",pn[i],&et[i]);
}
printf("\n The processes are:");
for(i=0;i<n;i++)
printf("process %d: %s\n",i+1,pn[i]);
for(i=0;i<n;i++)
tot=tot+et[i];
while(x!=tot)
{
for(i=0;i<n;i++)
{
if(et[i]>ts)
{
x=x+ts;
printf("\n %s -> %d",pn[i],ts);
et[i]=et[i]-ts;
}
else
if((et[i]<=ts)&&et[i]!=0)
{
x=x+et[i];
printf("\n %s -> %d",pn[i],et[i]);
et[i]=0;}
}
}
printf("\n Total Estimated Time:%d",x);
return 0;
}
