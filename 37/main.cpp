#include <iostream>
using namespace std; 
int main() {//세로형 그래프 출력 
	int arr[10][10] = {{0,},};
	int a[] = {5,8,9,6,4,10,8,7,6,5};
	for(int i = 0;i<10;i++)
	{
		for(int j = 0;j<a[i];j++)
		{
			arr[j][i] = 1;
		}
	}
	for(int i = 9;i>=0;i--)
	{
		for(int j = 0;j<10;j++)
		{
			if(arr[i][j] == 1)
				cout<<"*";
			else
				cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}
