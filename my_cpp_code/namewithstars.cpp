#include<iostream>
using namespace std;
void letter_J(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=2*n;j++)
		{
			if(i==1||j==(2*n/2)+1||(i==n&&j<=(2*n/2)+1)||(j==1&&i>=(n/2)+1))
			cout<<'*';
			else
			cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_L(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(i==n||j==1)
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_M(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=2*n-1;j++)
		{
			if(j==1||j==2*n-1||j==i||j==(2*n-1)-i+1)
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}
}
void letter_G(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(i==1||(j==1&&i<=n-1)||i==(n/2)||i==n-1||(j==n&&i>=(n/2)))
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_F(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(i=1||j==1||i==(n/2)+1)
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_E(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||i==(n/2+1)||j==1)
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_B(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(j==1||j==n||i==1||i==n||i==(n/2)+1)
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_Z(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==n-i+145)
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_X(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
	for(int k=1;k<=20;k++)
		cout<<ends;	
		for(j=1;j<=n;j++)
		{
			if(j==i||j==n-i+1)
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}	
	cout<<endl;
}
void letter_C(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=19;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||i==n)
			cout<<'*'<<' ';
			else cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_I(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==(n/2)+1)
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_N(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(j==1||j==n||i==j)
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_W(int n)
{
	int i,j,k=n,l=n;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=2*n-1;j++)
		{
			if(j==1||j==2*n-1||k==j||l==j)
			cout<<'*';
			else cout<<' ';
		}
		k++;
		l--;
		cout<<endl;
	}
	cout<<endl;
}
void letter_U(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(i==n||j==1||j==n)
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_H(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(i==(n/2)+1||j==1||j==n)
			cout<<'*';
			else cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_T(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(i==1||j==(n/2)+1)
			cout<<'*';
			else  cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_P(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if((i<=(n/2)+1&&(j==1||j==n))||i==1||i==(n/2)+1||(i>(n/2)+1&&j==1))
			cout<<'*';
			else
			cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
void letter_Y(int n)
{
	int i,j,p=n;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if((i<=(n/2)+1&&(j==i||j==p))||(i>(n/2)+1)&&j==(n/2)+1)
			cout<<'*';
			else
			cout<<' ';
		}
		p--;
		cout<<endl;
	}
	cout<<endl;
}
void letter_V(int n)
{
	int i,j,p=2*n-1;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=19;k++)
		cout<<ends;
		for(j=1;j<=p;j++)
		{
			if(j==i||j==p)
			cout<<'*';
			else
			cout<<' ';
		}
		p--;
		cout<<endl;
	}
	cout<<endl;
}
void letter_R(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			if(i==1||i==(n/2)+1||(i<=(n/2)+1&&j==n)||j==1||(i>=(n/2+1)&&j==i))
			cout<<'*';
			else 
			cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
} 

void letter_S(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(int k=1;k<=20;k++)
		cout<<ends;
		for(j=1;j<=n;j++)
		{
			
			if(i==1||i==n||i==(n/2)+1||(i<=(n/2)+1&&j==1)||(i>=(n/2)+1&&j==n))
			cout<<'*';
			else 
			cout<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}

void letter_A(int n)
{
	int i,j,p=n;
	for(i=n;i>=1;i--)
	{
		for(int k=1;k<=19;k++)
		cout<<ends;
		for(j=1;j<=p;j++)
		{
			if(j==i||j==p||(i==(n/2)+1&&j>=i))
			cout<<'*';
			else
			cout<<' ';
		}
		cout<<endl;
		p++;
	}
	cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter n value";
	cin>>n;
	char str[50]={'0'};
	cout<<"Enter your name in capital letters";
	cin>>str;
	int length = sizeof(str)/sizeof(str[0]);
	for(int i=0;i<length;i++)
	{
		switch(str[i])
		{
			case 'A':letter_A(n);
			break;
			case 'Y':letter_Y(n); 
			break;
			case 'S':letter_S(n);
		//	cout<<endl;
			break;
			case 'W':letter_W(n);
			break;
			case 'U':letter_U(n);
			break;
			case 'N':letter_N(n);
			break;
			case 'T':letter_T(n);
			break;
			case 'H':letter_H(n);
			break;
			case 'R':letter_R(n);
			break;
			case 'V':letter_V(n);
			break;
			case 'C':letter_C(n);
			break;
			case 'P':letter_P(n);
			break;
			case 'X':letter_X(n);
			break;
			case 'I':letter_I(n);
			break;
			case 'Z':letter_Z(n);
			break;
			case 'B':letter_B(n);
			break;
			case 'E':letter_E(n);
			break;
			case 'G':letter_G(n);
			break;
			case 'M':letter_M(n);
			cout<<endl;
			break;
			case 'L':letter_L(n);
			break;
			case 'J':letter_J(n);
			break;
			default: ;
			break;
		}
	}
}
