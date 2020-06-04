#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std; 
//암호화 문제 
int main() {
	char words[101];
	gets(words);
	int len = strlen(words);
	for(int i = 0;i<len;i++)
	{
		if(words[i] == ' ')
			continue;
		for(int j = 1;j<=4;j++)
		{
			if(words[i] == 'Z' || words[i] == 'z')
			{
				words[i]-=26;
			}
			words[i]++;
		}	
	}
	cout<<words<<endl;
	
	for(int i = 0;i<len;i++)
	{
		if(words[i] == ' ')
			continue;
		for(int j = 1;j<=4;j++)
		{
			if(words[i] == 'A' || words[i] == 'a')
			{
				words[i]+=26;
			}
			words[i]--;
		}	
	}
	cout<<words;
	return 0;
}
