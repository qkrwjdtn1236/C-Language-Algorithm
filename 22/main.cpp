#include <iostream>
using namespace std;
//���÷� ���� ������ ����ϴµ� �� ����� ����ġ�� �ٸ���. �л��� ���� ���� ���� ������ ����ġ�� ����� ������ �D�� 80 ���� ��� 1�� �հ� ���. 
int main() {
	int arr[5][4] = {{0,},}; //�л� ���� ��� 
	double per[3] = {0.29,0.38,0.33}; //�� ������ ����ġ 
	for(int i = 0;i<5;i++)
	{
		for(int j = 0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i = 0;i<5;i++)
	{
		int sum = 0;
		for(int j = 0;j<3;j++)
		{
			sum = sum+arr[i][j]*per[j];
		}
		cout<<i+1<<"��° ���� : "<<sum<<endl;
		if(sum>80)
			cout<<i+1<<"��° �л���(��)  1�� �հ��Դϴ�."<<endl;
		else
			cout<<i+1<<"��° �л���(��) 1�� ���հ��Դϴ�."<<endl; 
	}
	return 0;
}
