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
		cout<<number[i]<<"�� �Ѿ��� "<<result<<"�Դϴ�."<<endl;
	}
	cout<<"�Ѿ��� "<<sum<<"�Դϴ�.";
	return 0;
}
