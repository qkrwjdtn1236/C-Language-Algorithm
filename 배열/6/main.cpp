#include <iostream>
using namespace std; 
int main() {
	int kor[5] = {80,95,90,85,100};
	int eng[6] = {0,};
	for(int i = 0;i<5;i++)
	{
		cin>>eng[i];
	}
	cout<<"�������� : ";
	for(int i = 0;i<5;i++)
	{
		cout<<kor[i]<<',';
	}
	cout<<endl<<"���� ���� : ";
	for(int i = 0;i<5;i++)
	{
		cout<<eng[i]<<',';
	}
	return 0;
}
