#include <iostream>
using namespace std;
int main() {
	int arr[7][7] = {{0,},};
	int i,j,count = 0,sum = 0,n = 7/2+1,c = 0;
	
	for(i = 0;i<n;i++)
	{
		sum = i;
		for(j = count;j<7-count;j++)
		{
			sum++;
			arr[i][j] = sum;
		}
		count++;
	}
	
	for(i = n;i<7;i++)
	{
		count--;
		sum = i-count;
		for(j = count-1;j<7-c-1;j++)
		{
			sum++;
			arr[i][j] = sum;
		}
		count--;
	}
	
	for(i = 0;i<7;i++)
	{
		for(j = 0;j<7;j++)
		{
			if(arr[i][j] == 0)
				cout<<"  ";
			else
				cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}
	
	return 0;
}
