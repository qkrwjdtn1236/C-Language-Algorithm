#include <iostream>
using namespace std;
//정시로 수능 점수를 계산하는데 각 과목당 가중치가 다르다. 학생의 국어 수학 영어 점수를 가중치로 계산한 점수의 핪이 80 넘을 경우 1차 합격 출력. 
int main() {
	int arr[5][4] = {{0,},}; //학생 점수 등록 
	double per[3] = {0.29,0.38,0.33}; //각 과목의 가중치 
	for(int i = 0;i<5;i++)
	{
		for(int j = 0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i = 0;i<5;i++)
	{
		int sum = 0;
		for(int j = 0;j<3;j++)
		{
			sum = sum+arr[i][j]*per[j];
		}
		cout<<i+1<<"번째 점수 : "<<sum<<endl;
		if(sum>80)
			cout<<i+1<<"번째 학생은(는)  1차 합격입니다."<<endl;
		else
			cout<<i+1<<"번째 학생은(는) 1차 불합격입니다."<<endl; 
	}
	return 0;
}
