#include<stdio.h>
#include<string.h>

// Roman to integer conversion for numbers <= 3999;

int nums(char x)
{
    switch(x)
    {
        case 'I' : return 1;
            break;
        case 'V': return 5;
            break;
        case 'X':  return 10;
            break;
        case 'L': return 50;
            break;
        case 'C': return 100;
            break;
        case 'D': return 500;
            break;
        case 'M': return 1000;
            break;
    }
}
int romanToInt(char * s){
    int num = 0;
    for(int i=0;i<strlen(s);i++)
    {
        if(nums(s[i])<nums(s[i+1]))
        {
            num = num + (nums(s[i+1]) - nums(s[i]));
            i++;
        }
        else
            num = num + nums(s[i]);
    }
    return num;
}
int main()
{
	char s[] = "MMMCMXCIX";
	
	printf("Integer format of Roman: %d",romanToInt(s));
}
