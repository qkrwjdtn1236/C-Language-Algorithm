#include <iostream>
using namespace std;// ���� ��� 
void line()
{
	cout<<"------------------------------"<<endl;	
} 
int main() { // �������� 
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
			cout<<"���� ���� ã�� �� �����ϴ�."<<endl;
		else if(arr[i]<min)
		{
			cout<<arr[i]<<"�� "<<min<<"���� �۱⿡ �����մϴ�."<<endl;
		}
		else
		{
			cout<<"���� ���� ���� "<<min<<"�Դϴ�."<<endl;
			swap = arr[address];
			arr[address] = arr[i];
			arr[i] = swap;
		}
		line();
		cout<<arr[address]<<"�� "<<arr[i]<<"�� �ٲپ����ϴ�. "<<endl; 
		line();
		for(int n = 0;n<len;n++)
		{
			cout<<arr[n]<<' ';
		}
		cout<<endl;
		line();
	}
	cout<<"������ ���"<<endl;
	for(int i = 0;i<len;i++)
	{
		cout<<arr[i]<<' ';
	}
	return 0;
}
