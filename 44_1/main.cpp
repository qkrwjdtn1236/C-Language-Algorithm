#include <iostream>
#include <cstring> //회문 판단기 - 최대 100자 
using namespace std;
int main() {
	char word[100];
	int address = 0;
	cin.getline(word,100,'\n');
	cout<<word<<endl;
	int len = strlen(word);
	char copy[len];
	for(int i = len-1;i>=0;i--)
	{
		copy[i] = word[address];
		address++;
	}
	for(int i = 0;i<len-1;i++)
	{
		if(copy[i] != word[i])
		{
			cout<<"회문아닙니다.";
			return 0;			
		}
	}
	cout<<"회문입니다.";
 return 0;
}
