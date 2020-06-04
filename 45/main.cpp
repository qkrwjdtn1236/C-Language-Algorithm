#include <iostream>
using namespace std;
int main()
{
	int input;
	cin>>input;
	while(input != 1)
	{
		cout<<input<<"->";
		if(input%2 == 1)
			input = input*3+1;
		else if(input%2 == 0)
			input/=2;
		if(input ==1)
			cout<<input;	
	}
 }
