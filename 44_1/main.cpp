#include <iostream>
#include <cstring> //ȸ�� �Ǵܱ� - �ִ� 100�� 
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
			cout<<"ȸ���ƴմϴ�.";
			return 0;			
		}
	}
	cout<<"ȸ���Դϴ�.";
 return 0;
}
