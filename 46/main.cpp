#include <iostream>
using namespace std;
int main() {
	char arr[4][4] = {{'A','B','C','D'},{'E','F','G','H'},{'I','J','K','L'},{'M','N','O','P'}};
	char copy[4][4];
	char copy2[4][4];
	char copy3[4][4];
	for(int i = 0;i<4;i++)
	{
		for(int j = 0;j<4;j++)
		{
			cout<<arr[i][j]<<' ';	
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i = 0;i<4;i++)
	{
		for(int j = 0;j<4;j++)
		{
			copy2[3-i][3-j] = arr[i][j]; //180	
			copy[i][3-j] = arr[j][i]; //90
			copy3[3-i][j] = arr[j][i]; //270
		}
	}
	for(int i = 0;i<4;i++)
	{
		for(int j = 0;j<4;j++)
		{
			cout<<copy[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i = 0;i<4;i++)
	{
		for(int j = 0;j<4;j++)
		{
			cout<<copy2[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i = 0;i<4;i++)
	{
		for(int j = 0;j<4;j++)
		{
			cout<<copy3[i][j]<<' ';
		}
		cout<<endl;
	}
	
	return 0;
}
