#include <iostream>
using namespace std;
int main() {
	int num[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i = 0;i<9;i=i+2)
	{
		int swap = num[i+1];
		num[i+1] = num[i]; //2¹øÂ° 1
		num[i] = swap; 
	}
	for(int i = 0;i<10;i++)
	{
		cout<<num[i]<<' ';
	}
	return 0;
}
