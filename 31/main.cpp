#include <iostream>
using namespace std;
//2���� 2�� ���� �Է¹ް� ���ϱ� 
int main() {
	int a,b,sum = 0,n,mul = 1;
	cin>>a>>b;
	while(a!=0) //a�� 10���� ��ȯ 
	{
		//cout<<a<<endl;
		n = a%10;
		sum = sum+n*mul;
		mul*=2;
		a/=10;
	}
	//cout<<sum;
	mul = 1;
	while(b!=0) //b�� 10���� ��ȯ 
	{
		n = b%10;
		sum = sum+n*mul;
		mul*=2;
		b/=10;
	} //���� a��b���� 10������ ���� ���� 
	//cout<<sum;
	int arr[10] = {0,},count = 0;
	while(sum!=0) //0�Ǳ����� �ݺ��� ����,10�������� 2������ ��ȯ 
	{
		n = sum%2;
		arr[count] = n;
		sum/=2;
		count++;
	}
	for(int i = count-1;i>=0;i--)//10�������� 2���� ���ϴ� ���Ŀ��� ���ٷ� ����ϱ� ���� �ݺ��� 
	{
		cout<<arr[i];
	}
	return 0;
}
