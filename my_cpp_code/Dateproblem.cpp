#include<iostream>
using namespace std;

int main()
{
	int dd,mm,yyyy;
	cout<<"Enter a date dd-mm-yyyy in this pattern";
	scanf("%d-%d-%d",&dd,&mm,&yyyy);
	if(mm==1&&dd==31)
	{
		dd = 1;
		mm = mm+1;
	}
	else if(mm==2)
	{
		if(yyyy%4==0&&dd==29)
		dd=1;
		else if(dd==28)
		dd =1;
		else ;
		mm = mm+1;
	}
	else if(mm==3&&dd==31)
	{
		dd = 1;
		mm = mm + 1;
	}
	else if(mm==4&&dd==30)
	{
		dd = 1;
		mm = mm + 1;
	}
	else if(mm==5&&dd==31)
	{
		dd = 1;
		mm = mm + 1;
	}
	else if(mm==6&&dd==30)
	{
		dd = 1;
		mm = mm + 1;
	}
	else if(mm==7&&dd==31)
	{
		dd = 1;
		mm = mm + 1;
	}
	else if(mm==8&&dd==31)
	{
		dd = 1;
		mm = mm + 1;
	}
	else if(mm==9&&dd==30)
	{
		dd = 1;
		mm = mm + 1;
	}
	else if(mm==10&&dd==31)
	{
		dd = 1;
		mm = mm + 1;
	}
	else if(mm==11&&dd<30)
	{
		dd = 1;
		mm = mm + 1;
	}
	else if(mm==12&&dd==31)
	{
		dd = 1;
		mm = 1;
		yyyy = yyyy+1;
	}
	else
	{
		dd = dd+1;
	}
	printf("%d-%d-%d",dd,mm,yyyy);
}
