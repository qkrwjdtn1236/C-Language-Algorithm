#include <iostream>
using namespace std;
int main() {
	//int add = 0;
	int arr[7] = {0,};
	int swap[7] = {0,};
	int count = 0;
	/*
	while(input != 0)
	{
		cin>>input;
		arr[i] = input;
		i++;
	}
	//add = i;
	for(i = i-2;i>=0;i--)
	{
		cout<<arr[i]<<' ';
	}
	*/
	for(int i = 0;i<6;i++)
	{
		cin>>arr[i];
		if(arr[i] != 0)
			count++;
	}
	for(int i = count-1;i>=0;i--)
	{
		cout<<arr[i]<<' ';
	}
	for(int i = count;i<6;i++)
	{
		cout<<arr[count]<<' ';
	}
	return 0;
}
