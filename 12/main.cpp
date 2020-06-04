#include <iostream>
#include <cstdio>
using namespace std;
//9명 심사위원 심사한 결과를 최대값과 최소값을제외한 나머지 점수 평균 구하기 
//score[9] = {2,4,7,5,6,9,3,8,1} 
int main() {
	int score[9] = {2,4,7,5,6,9,3,8,1};
	int max = 0,min = 10;
	double sum = 0;
	for(int i = 0;i<9;i++)
	{
		int swap = score[i];
		if(max<swap)
			max = swap;
		if(min>swap)
			min = swap;
		sum+=swap;
	}
	sum = (sum-max-min)/7;
	//cout<<"최대값, 최소값 제외한 점수의 평균 : "<<(double)sum<<endl;
	printf("최대값, 최소값 제외한 점수의 평균 : %.1f",sum);
	return 0;
}
