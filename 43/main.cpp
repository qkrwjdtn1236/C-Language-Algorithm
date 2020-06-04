#include <iostream>
using namespace std;// 라인 출력 
void line()
{
	cout<<"------------------------------"<<endl;	
} 
int main() { // 선택정렬 
	int arr[] = {36,42,13,27,9,32,40};
	int len = sizeof(arr)/sizeof(int);
	int address, min=999, j,swap;
	for(int i = 0;i<len;i++)
	{
		cout<<arr[i]<<' ';
	}
	cout<<endl;
	for(int i = 0;i<len-1;i++)
	{
		min = 999;
		for(j = i+1;j<len;j++)
		{
			if(min>arr[j])
			{
				address = j;
				min = arr[j];
			}
		}
		line();
		if(min == 999)
			cout<<"작은 값을 찾을 수 없습니다."<<endl;
		else if(arr[i]<min)
		{
			cout<<arr[i]<<"는 "<<min<<"보다 작기에 유지합니다."<<endl;
		}
		else
		{
			cout<<"가장 작은 값은 "<<min<<"입니다."<<endl;
			swap = arr[address];
			arr[address] = arr[i];
			arr[i] = swap;
		}
		line();
		cout<<arr[address]<<"와 "<<arr[i]<<"를 바꾸었습니다. "<<endl; 
		line();
		for(int n = 0;n<len;n++)
		{
			cout<<arr[n]<<' ';
		}
		cout<<endl;
		line();
	}
	cout<<"실행후 결과"<<endl;
	for(int i = 0;i<len;i++)
	{
		cout<<arr[i]<<' ';
	}
	return 0;
}
