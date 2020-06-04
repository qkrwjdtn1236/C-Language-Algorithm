#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
//100명의 점수를 무작위로 저장하여 점수가 77에 가장 가까운 값을 찾아 출력하는 프로그램 
int main() {
	int no = 0, min = 100;
	int arr[101] = {0,};
	srand((unsigned)time(NULL));
	for(int i = 0;i<100;i++)
	{
		arr[i] = rand()%100+1; 
		cout<<i+1<<"번째 고과 포인트 : "<<arr[i]<<"점"<<endl;
		if(abs(77-arr[i])<min)
		{
			min = abs(77-arr[i]);
			no = i;
		}
	}
	cout<<"고과 포인트 77에 가장 가까운 값은 "<<arr[no]<<"이며, 사람은 "<<no+1<<"번째 입니다."<<endl; 
}
