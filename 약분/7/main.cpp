#include <iostream>
using namespace std;
//4���� 1000�������� �ڽ��� ������ �ڽ��� �� ��и� ���Ѱ��� ����� ���� ���� ���� ����ϰ�, ������ ���ϱ�; 
int main() {
	int count = 0;
	for(int i = 4;i<=1000;i++)
	{
		int sum = 0;
		for(int j = 1;j<i;j++)
		{
			if(i%j == 0)
			{
				//cout<<j<<',';
				sum+=j;
			}
		}
		//cout<<sum<<',';
		//cout<<endl;
		if(sum == i)
		{
			cout<<i<<',';
			count++;
		}
	}
	cout<<endl<<"������ "<<count<<" �Դϴ�.";
	return 0;
}
