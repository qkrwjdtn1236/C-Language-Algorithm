#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;
//���� �ִ� �˰��� 
int main()
{
	int money_type[10] = {50000,10000,5000,1000,500,100,50,10,5,1};
	int count[10] = {0,};
	int money, sum = 0;
	char name[3];
	srand((unsigned)time(NULL));
	for(int i = 0;i<3;i++)
		name[i] = rand()%52+66;
	
	cin>>money; 
	for(int i = 0;i<10;i++)
	{
		count[i] = money/money_type[i];
		money%=money_type[i];
		cout<<money_type[i]<<"���� ���� ���� : "<<count[i]<<endl;
		Sleep(500);
		sum+=count[i];
	}
	cout<<name<<"���� ������ �� ���� : "<<sum;
}
