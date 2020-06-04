#include <iostream>
using namespace std;
// 스마트폰 앱에서 걷는 길이 만큼 기부하는 앱, 기부 금액을 계산(단, 일주일 걸을 거리는 배열로 나타냄 gibu[7] = {15,10,12,20,16,22,10};
//1km = 50원 , 10km 넘으면 1km 70원, 20km넘으면 1km당 100원, 50km는 150원, 100km는 200원을 기부한다.
int main() {
	int swap = 0;
	int sum = 0;
	int gibu[7]=  {15,10,12,20,16,22,10};
	for(int i = 0;i<7;i++)
	{
		swap = gibu[i];
		if(swap>=100)
			sum = sum+swap*200;
		else if(swap>=50)
			sum = sum+swap*150;
		else if(swap>=20)
			sum = sum+swap*100;
		else if(swap>=10)
			sum = sum+swap*70;
		else
			sum = sum+swap*50;
	}
	cout<<"1주일 기부액은 "<<sum<<"원 입니다."<<endl; 
	return 0;
}
