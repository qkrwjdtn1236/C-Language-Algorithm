#include <iostream>
using namespace std;
int main() {
	int arr[2][3] = {{1,2,3},{4,5,6}};
	int copy[3][2] = {{0,},};
	int a = -1,b = 0;
	int number = 1;
	for(int i = 0;i<2;i++)
	{
		for(int j = 0;j<3;j++)
		{
			if(a == 2)
			{
				a = -1;
				b++;
			}
			a++;
			copy[b][a] = arr[i][j];
		}
	}
	for(int i = 0;i<3;i++)
	{
		for(int j  = 0;j<2;j++)
		{
			cout<<copy[i][j]<<'\t';
		}
		cout<<endl;
	}
	return 0;
}
