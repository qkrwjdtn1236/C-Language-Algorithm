#include <iostream>
using namespace std; 
int main() {
	int number[6] = {0,};
	int time[6] = {0,};
	int money[6] = {0,};
	int i = 0,result;
	while(i<=5)
	{
		cin>>number[i];
		if(number[i] == -1)
			break;
		cin>>money[i]>>time[i];
		i++;
	}
	int sum = 0;
	
	for(int i = 0;number[i]!=-1;i++)
	{
		if(time[i]>=40)
		{
			int j = time[i]-40;
			result = (money[i]*40) +(money[i]*1.5*j);
		}
		else
		{
			result = money[i]*time[i];	
		}
		sum+=result;
		cout<<number[i]<<"번 총액은 "<<result<<"입니다."<<endl;
	}
	cout<<"총액은 "<<sum<<"입니다.";
	return 0;
}
