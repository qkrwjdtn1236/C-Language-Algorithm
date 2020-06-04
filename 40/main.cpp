#include <iostream>
using namespace std;

int main() {
	int num = 1;
	for(int i = 0;i<5;i++)
	{
		for(int n = 0;n<i;n++)
		{
			cout<<'\t';
		}
		for(int j = 0;j<5-i;j++)
		{
			cout<<num<<'\t';
			num++;
		}
		cout<<endl;
	}
	return 0;
}
