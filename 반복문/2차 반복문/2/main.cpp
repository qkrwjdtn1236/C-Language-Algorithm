#include <iostream>
#include <cstdio>
//Ÿ�� ���̺��� ����ϴ� �˰����� �ۼ�; 

using namespace std;
int main() {
	cout<<"     ";
	for(int i = 1;i<=10;i++)
		printf("%4d",i);
	cout<<endl;
	for(int i = 0;i<5+4*10;i++)
		cout<<'-';
	cout<<endl;
	//cout<<"--------------------"<<endl;
	for(int i = 1;i<=10;i++)
	{
		printf("|%3d|",i);
		for(int j = 1;j<=10;j++)
		{
			printf("%4d",i*j);
		}
		cout<<endl;
	}
	return 0;
}
