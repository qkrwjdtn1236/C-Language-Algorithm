#include <iostream>
using namespace std;
//10개의 정수를 입력받아 가장 작은수, 가장 큰수를 제외한 8개 점수를 평균 구하기(배열); 
int main() {
	int max = -1,min = 101,sum = 0;
	int arr[11] = {0,};
	cout<<"점수를 입력하시오 : ";
	for(int i = 0;i<10;i++)
	{
		cin>>arr[i];
		if(arr[i]<min)
			min = arr[i];
		if(arr[i]>max)
			max = arr[i];
		sum+=arr[i];
	}
	cout<<"가장 큰 점수 : "<<max<<endl;
	cout<<"가장 작은 점수 : "<<min<<endl;; 
	sum = sum-max-min;
	double avg = sum/8.0;
	cout<<"가장 높은 점수와 가장 낮은 점수를 제외한 8개 정수값 평균은 : "<<avg<<"입니다."<<endl;
	return 0;
}
