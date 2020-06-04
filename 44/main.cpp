#include <iostream>
#include <cstring> //회문 판단기 - 최대 100자 
using namespace std;
int main() {
	char word[100];
	int address = 0;
	cin.getline(word,100,'\n');
	int len = strlen(word);
	char copy[len];
	for(int i = len-1;i>=0;i--)
	{
		copy[i] = word[address];
		address++;
	}
	if(strstr(copy,word))
	{
		cout<<"회문이다.";
	}
	else
	{
		cout<<"회문이 아니다.";
	}
	return 0;
}
