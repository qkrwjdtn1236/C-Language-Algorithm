#include <iostream>
using namespace std;
//2,3,5g�� ���� 10�� �ִ�, �� �߸� �̿��ؼ� ��ü ���԰� 81g�� ���� ������ ���ϱ� 
int main() {
	int count = 0;
	for(int i = 1;i<=10;i++)
	{
		for(int j = 1;j<=10;j++)
		{
			for(int k = 1;k<=10;k++)
			{
				int num = 2*k+3*j+5*i;
				if(num == 81)
				{
					count++;
					cout<<"2g �� ���� : "<<k<<", 3g�� ���� : "<<j<<", 5g�� ���� : "<<i<<endl;
				}		
			}	
		}	
	}
	cout<<"���� ������ "<<count<<"�Դϴ�.";
	return 0;
}
