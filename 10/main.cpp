#include <iostream>
using namespace std;
//2������ 10������ ��ȯ 
int main() {
	int num,swap,sum = 0;
	cout<<"��ȯ�� 2������ �Է����ּ��� : ";
	cin>>num;
	for(int i = 0;num!=0;i++)
	{
		swap = num%10;
		num/=10;
		int mul = 1;
		for(int j = 0;j<i;j++)
			mul*=2;
		sum = sum+swap*mul;
	}
	cout<<"10���� ��� : "<<sum;
	return 0;
}
