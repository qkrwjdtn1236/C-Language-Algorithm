#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//�ζ� 1~46 ���� ���� 6���� �ߺ� ���� ���ϰ� ��� ������ ���; 
int main() {
	
	int arr[6] = {23,45,34,13,26,7}; //xxxȸ ��û��ȣ 
	int random[6] = {0,};
	srand((unsigned)time(NULL));
	for(int i = 0;i<6;i++)  //���� ���� �� �ߺ��� ���� 
	{
		random[i] = rand()%46+1;
		for(int j = 0;j<=i;j++)
		{
			if(random[i] == j)
				i--;
		}
	}
	for(int i = 0;i<6;i++) //���� ����� 
	{
		cout<<random[i]<<"\t";
	}
	cout<<endl<<"��÷ ��ȣ : ";
	int c = 0;
	for(int i = 0;i<6;i++)
	{
		for(int j = 0;j<6;j++)
		{
			if(random[i] == arr[j]) //��û�� ��ȣ ��� �� ���� ���� 
			{
				cout<<random[i]<<"\t";
				c++;
				break;
			}
		}
	}
	cout<<endl<<"�ζ� ��÷ ���� : "<<c;
	return 0;
}
