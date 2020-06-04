#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	for(int i = 1;i<=100;i++)
	{
		for(int j = 1;j<=i;j++)
		{
			cout<<j<<' ';
			sum += j;
		}
		cout<<endl;
	}
	cout<<"1부터 100까자의 더한 값은 "<<sum<<"입니다."<<endl; 
	return 0;
}
