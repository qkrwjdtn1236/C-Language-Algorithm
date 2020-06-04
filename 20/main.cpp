#include <iostream>
using namespace std;
int main() {
	int sum[3] = {0,};
	int arr[20] = {1,2,1,2,3,1,2,2,3,1,3,3,1,1,1,2,3,1,3,2};
	for(int i = 0;i<20;i++)
	{
		for(int j = 1;j<=3;j++)
		{
			if(arr[i] == j)
			{
				sum[j-1]++;
				break;
			}
		}
	}
	cout<<"ºÒ¸¸Á· : °¹¼ö : "<<sum[0]<<endl;
	cout<<"º¸Åë °¹¼ö : "<<sum[1]<<endl;
	cout<<"¸¸Á· °¹¼ö : "<<sum[2]<<endl;
	return 0;
}
