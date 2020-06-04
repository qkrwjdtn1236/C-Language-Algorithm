#include <iostream>
using namespace std;
int main() {
	int a = 4,b = 5,swap;
	int num [10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i = 0;i<5;i++)
	{
		swap = num[b];
		num[b] = num[a];
		num[a]= swap;
		a--;
		b++;
	}
	for(int i = 0;i<10;i++)
	{
		cout<<num[i]<<' ';
	}
	/*
	for(int i = 9;i>=0;i--)
	{
		cout<<num[i]<<' ';
	}
	*/
	return 0;
}
