#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//로또 1~46 사이 숫자 6개를 중복 없이 구하고 몇개가 같은지 출력; 
int main() {
	
	int arr[6] = {23,45,34,13,26,7}; //xxx회 담청번호 
	int random[6] = {0,};
	srand((unsigned)time(NULL));
	for(int i = 0;i<6;i++)  //난수 생성 및 중복값 제거 
	{
		random[i] = rand()%46+1;
		for(int j = 0;j<=i;j++)
		{
			if(random[i] == j)
				i--;
		}
	}
	for(int i = 0;i<6;i++) //난수 결과값 
	{
		cout<<random[i]<<"\t";
	}
	cout<<endl<<"당첨 번호 : ";
	int c = 0;
	for(int i = 0;i<6;i++)
	{
		for(int j = 0;j<6;j++)
		{
			if(random[i] == arr[j]) //담청된 번호 출력 및 갯수 세기 
			{
				cout<<random[i]<<"\t";
				c++;
				break;
			}
		}
	}
	cout<<endl<<"로또 당첨 갯수 : "<<c;
	return 0;
}
