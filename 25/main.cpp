#include <iostream>
using namespace std; 
//2������ 10�������� ��ȯ�ϱ� 
int main() {
	int number;
	cin>>number;
	int sum = 0;
	int count = 1;
	while(number!=0)
	{
		//cout<<number/10<<endl;
		sum = sum+(number%10)*count;
		number/=10;
		count*=2;
	}
	cout<<sum;
	return 0;
}

