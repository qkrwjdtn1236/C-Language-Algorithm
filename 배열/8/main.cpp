#include <iostream>
using namespace std;
//10���� ������ �Է¹޾� ���� ������, ���� ū���� ������ 8�� ������ ��� ���ϱ�(�迭); 
int main() {
	int max = -1,min = 101,sum = 0;
	int arr[11] = {0,};
	cout<<"������ �Է��Ͻÿ� : ";
	for(int i = 0;i<10;i++)
	{
		cin>>arr[i];
		if(arr[i]<min)
			min = arr[i];
		if(arr[i]>max)
			max = arr[i];
		sum+=arr[i];
	}
	cout<<"���� ū ���� : "<<max<<endl;
	cout<<"���� ���� ���� : "<<min<<endl;; 
	sum = sum-max-min;
	double avg = sum/8.0;
	cout<<"���� ���� ������ ���� ���� ������ ������ 8�� ������ ����� : "<<avg<<"�Դϴ�."<<endl;
	return 0;
}
