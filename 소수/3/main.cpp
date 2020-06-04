#include <iostream>
//5에서부터 소수에 해당하는 수 10개를출력하고 그 합을 구하기 알고리즘; 
using namespace std;
int main() {
	int c = 0;
	int i = 5;
	/*
	while(true)
	{
		for(int j = 2;j<i;j++)
		{
			if(i%j == 0)
			break;
		}
		if(i == j-1)
	}
	*/
	int sum = 0;
	int num = 0;
	for(int i = 5;;i++)
	{
		int c = 0;
		for(int j = 2;j<i;j++)
		{
			if(i%j == 0)
				c++;
		}
		if(c == 0)
		{
			sum+=i;
			num++;
			cout<<"소수 "<<num<<"번째 : "<<i<<endl;
		}
		if(num == 10)
			break;
	}
	cout<<"5에서부터 소수에 해상하는 수의 합은 "<<sum<<"입니다."<<endl;
	return 0;
}
