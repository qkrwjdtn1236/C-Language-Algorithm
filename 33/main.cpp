#include <iostream>
using namespace std;

int main() {
	int i,j,sum = 0,count = 0,c = 0;
	int arr[7][7] = {{0,},};
	int n = 7/2+1;
	
	for(i = 0;i<n;i++)
	{
		for(j = count;j<7-count;j++)
		{
			sum++;
			arr[j][i] = sum;
		}
		count++;
	}
	
	for(i = n;i<7;i++)
	{
		c++;
		for(j = count-c-1;j<=count+c-1;j++)
		{
			sum++;
			arr[j][i] = sum;
		}
	}
	
	for(i = 0;i<7;i++)
	{
		for(j = 0;j<7;j++)
		{
			if(arr[i][j] == 0)
				cout<<'\t';
			else
				cout<<arr[i][j]<<'\t';
		}
		cout<<endl;
	}
	return 0;
}
