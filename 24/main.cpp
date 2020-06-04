#include <iostream>
using namespace std;
//소수이면 소수입니다를 출력하고 소수 아닐경우에는 소인수분해를 구하기 
int main() {
	int sosu[101] = {0,};
	int number;
	cin>>number;
	int count = 0;
	for(int i = 2;i<number-1;i++)
	{
		if(number%i == 0)
		{
			count++;
			break;
		}
	}
	if(count == 0)
		cout<<"소수입니다.";
	else
	{
		int address = 0;
		for(int i = 2;i<number;i++)
		{
			count = 0;
			
			for(int j = 2;j<=i;j++)
			{
				if(i%j == 0)
				{
					count++;
				}
			}
			if(count<2)
			{
				//cout<<i<<',';
				sosu[address] = i;
				address++;
			}
		}
		int j;
		while(number!=1)
		{
			for(j = 0;j<address;j++)
			{
				if(number%sosu[j] == 0)
				{
					number/=sosu[j];
					cout<<sosu[j]<<',';
					break;
				}
			}
		}
		cout<<"소수가 아닙니다.";
	} 
	return 0;
}
