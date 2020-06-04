#include <iostream>
using namespace std; 
int main() {
	int arr[2][3] = {{1,2,3},{4,5,6}};
	int arr1[3][2] = {{0,},};
	int num = 0;
	int a = 0,b = 0;
	for(int i = 0;i<2;i++)
	{
		for(int j = 0;j<3;j++)
		{
			if(b%2 == 0 && b!= 0)
			{
				a++;
				b = 0;
			}
			else
			{
				b++;
			}
			arr1[a][b] = arr[i][j];
		}
	}
	for(int i = 2;i>=0;i--)
	{
		for(int j = 0;j<2;j++)
		{
			cout<<arr1[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
