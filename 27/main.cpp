#include <iostream>
using namespace std;
//1���� �迭�� �ִ°��� ���� ����,����,����,�������� ���ϴ� �˰���. 
int main() {
	int A[] = {2,3,5,9,10};
	int B[] = {1,2,3,4,5};
	for(int i = 0;i<sizeof(A)/sizeof(int);i++)
	{
		cout<<i+1<<" ��° ���� "<<A[i]+B[i]<<endl;
		cout<<i+1<<" ��° ���� "<<A[i]-B[i]<<endl;
		cout<<i+1<<" ��° ���� "<<A[i]*B[i]<<endl;
		cout<<i+1<<" ��° ������ "<<A[i]/B[i]<<endl;
		cout<<endl; 
	}
	return 0;
}
