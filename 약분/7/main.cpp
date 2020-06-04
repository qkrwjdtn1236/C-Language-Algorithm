#include <iostream>
using namespace std;
//4부터 1000가지수중 자신을 제외한 자신의 수 약분를 더한값이 약분한 대상과 같은 수를 출력하고, 갯수를 구하기; 
int main() {
	int count = 0;
	for(int i = 4;i<=1000;i++)
	{
		int sum = 0;
		for(int j = 1;j<i;j++)
		{
			if(i%j == 0)
			{
				//cout<<j<<',';
				sum+=j;
			}
		}
		//cout<<sum<<',';
		//cout<<endl;
		if(sum == i)
		{
			cout<<i<<',';
			count++;
		}
	}
	cout<<endl<<"갯수는 "<<count<<" 입니다.";
	return 0;
}
