#include <iostream>
using namespace std; //�������� 
void line()
{
	cout<<"----------------------------------------------"<<endl;
}
int main() {
	int arr[] = {36,42,13,27,9,32,40};
	int len = sizeof(arr)/sizeof(int);
	cout<<"�����ϱ���"<<endl;
	for(int i = 0;i<len;i++)
	{
		cout<<arr[i]<<' ';	
	}
	cout<<endl;
	line();
	int swap;
	for(int i = 0;i<len;i++)
	{
		for(int j = 0;j<len-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap = arr[j];
				arr[j]  = arr[j+1];
				arr[j+1] = swap;
				line();
				cout<<arr[i]<<"�� "<<arr[j]<<"�� �ٲߴϴ�."<<endl;
				line();
				for(int k = 0;k<len;k++)
				{
					cout<<arr[k]<<' ';
				}
				cout<<endl;
				line();
			}
			else
			{
				line();
				cout<<arr[i]<<"�� "<<arr[j]<<"���� �۰ų� ���⿡ �����մϴ�."<<endl;
				line();
			}
		}
	}
	cout<<"���� �����"<<endl;
	for(int i = 0;i<len;i++)
	{
		cout<<arr[i]<<' ';	
	}
	line(); 
	return 0;
}
