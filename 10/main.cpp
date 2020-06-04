#include <iostream>
using namespace std;
//2진수를 10진수로 변환 
int main() {
	int num,swap,sum = 0;
	cout<<"변환할 2진수를 입력해주세요 : ";
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
	cout<<"10진수 결과 : "<<sum;
	return 0;
}
