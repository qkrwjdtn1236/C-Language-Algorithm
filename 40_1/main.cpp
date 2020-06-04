#include <iostream>
using namespace std;
int main() {
	int arr[5][5]=  {{0,},};
	int num = 1;
	for(int i = 0;i<5;i++)
	{
		for(int j = i;j<5;j++)
		{
			arr[i][j] = num;
			num++;
		}
	}
	for(int i = 0;i<5;i++)
	{
		for(int j = 0;j<5;j++)
		{
			if(arr[i][j] == 0)
			{
				cout<<'\t';
			}
			else
			{
				cout<<arr[i][j]<<'\t';
			}
		}
	cout<<endl;
	}
	return 0;
}
