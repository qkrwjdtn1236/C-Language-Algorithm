#include <iostream>
using namespace std;
//������������ �����ϱ�(��������) 
int main() {
	int swap;
	int A[] = {90,75,70,100,85,65,73,85,93,60};
	for(int i = 0;i<sizeof(A)/sizeof(int)-1;i++) //0~8
	{
		for(int j = i+1;j<sizeof(A)/sizeof(int);j++)//1~9
		{
			if(A[i]<=A[j])
			{
				swap = A[j];
				A[j] = A[i];
				A[i] = swap;
			}
		}
	}
	for(int i = 0;i<sizeof(A)/sizeof(int);i++)
	{
		cout<<A[i]<<"�� ������ "<<i+1<<"�� �Դϴ�."<<endl; 
	}
	return 0;
}
