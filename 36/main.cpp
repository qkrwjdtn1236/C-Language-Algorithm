#include <iostream>
using namespace std;
int main() {
	//ȿ�뵵 �ִ밡 �ǰڱ� �ٸ��� �˰���(�� ��ɴ� 13������) 
	int count = 0;
	int max = 0,sum = 0,number;
	int arr1[] = {1,3,2,5,4}; //���� 
	int arr2[] = {4,2,7,9,3}; //ȣ�뵵 
	/*
	for(int i = 0;i<5;i++)
	{
		sum+=arr1[i];
	}
	for(int i = 0;i<5;i++)
	{
		if(sum-arr1[i] == 13)
		{
			number = arr1[i];
		}
	}
	for(int i = 0;i<5;i++)
	{
		if(arr1[i] == number)
		{
			continue;
		}
		cout<<arr1[i]<<'\t';
	}
	*/
	int swap;
	for(int i = 0;i<5-1;i++)
	{
		for(int j = i+1;j<5;j++)
		{
			if(arr2[i]<arr2[j])
			{
				swap = arr2[j];
				arr2[j] = arr2[i];
				arr2[i] = swap;
			
				swap = arr1[j];
				arr1[j] = arr1[i];
				arr1[i] = swap;	
			}
		}
	}
	int mul = 0; 
	for(int i = 0;i<5;i++)
	{
		if(sum+arr1[i]<=13)
		{
			sum+=arr1[i];
			cout<<arr1[i]<<endl;
		}
	}
	return 0;
}
