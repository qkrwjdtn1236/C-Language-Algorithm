#include <iostream>
//2���� 100���� �Ҽ� ������ ���ϰ� �Ҽ� ���� Ȯ�� ���ϱ�; 
using namespace std;
int main() {
	int i,j;
	int num = 0;
	for(i = 2;i<=100;i++)
	{
		for(j = 2;j<i;j++)
		{
			if(i%j == 0)
				break;

		}
		if(i == j)
			num++;
	}
	cout<<"2���� 100���� �Ҽ� ���� : "<<num<<endl;
	cout<<"�Ҽ� ���� Ȯ�� : "<<(num/99.0)*100<<'%'<<endl;
	return 0;
} 
