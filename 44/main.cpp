#include <iostream>
#include <cstring> //ȸ�� �Ǵܱ� - �ִ� 100�� 
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
		cout<<"ȸ���̴�.";
	}
	else
	{
		cout<<"ȸ���� �ƴϴ�.";
	}
	return 0;
}
