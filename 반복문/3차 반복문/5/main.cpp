#include <iostream>
using namespace std;
//2,3,5g이 각각 10개 있다, 그 추를 이용해서 전체 무게가 81g인 추의 갯수를 구하기 
int main() {
	int count = 0;
	for(int i = 1;i<=10;i++)
	{
		for(int j = 1;j<=10;j++)
		{
			for(int k = 1;k<=10;k++)
			{
				int num = 2*k+3*j+5*i;
				if(num == 81)
				{
					count++;
					cout<<"2g 의 갯수 : "<<k<<", 3g의 갯수 : "<<j<<", 5g의 갯수 : "<<i<<endl;
				}		
			}	
		}	
	}
	cout<<"식의 갯수는 "<<count<<"입니다.";
	return 0;
}
