#include <iostream>
using namespace std;
//2진수 2개 값을 입력받고 더하기 
int main() {
	int a,b,sum = 0,n,mul = 1;
	cin>>a>>b;
	while(a!=0) //a값 10진수 변환 
	{
		//cout<<a<<endl;
		n = a%10;
		sum = sum+n*mul;
		mul*=2;
		a/=10;
	}
	//cout<<sum;
	mul = 1;
	while(b!=0) //b값 10진수 변환 
	{
		n = b%10;
		sum = sum+n*mul;
		mul*=2;
		b/=10;
	} //현재 a와b값을 10진수로 더한 상태 
	//cout<<sum;
	int arr[10] = {0,},count = 0;
	while(sum!=0) //0되기전에 반복문 실행,10진수에서 2진수로 변환 
	{
		n = sum%2;
		arr[count] = n;
		sum/=2;
		count++;
	}
	for(int i = count-1;i>=0;i--)//10진수에서 2진수 구하는 공식에서 꺼꾸로 출력하기 위한 반복문 
	{
		cout<<arr[i];
	}
	return 0;
}
