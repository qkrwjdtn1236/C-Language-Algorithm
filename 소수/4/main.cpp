#include <iostream>
//2부터 100까지 소수 갯수를 구하고 소수 나올 확률 구하기; 
using namespace std;
int main() {
	int i,j;
	int num = 0;
	for(i = 2;i<=100;i++)
	{
		for(j = 2;j<i;j++)
		{
			if(i%j == 0)
				break;

		}
		if(i == j)
			num++;
	}
	cout<<"2부터 100까지 소수 갯수 : "<<num<<endl;
	cout<<"소수 나올 확률 : "<<(num/99.0)*100<<'%'<<endl;
	return 0;
} 
