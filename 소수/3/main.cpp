#include <iostream>
//5�������� �Ҽ��� �ش��ϴ� �� 10��������ϰ� �� ���� ���ϱ� �˰���; 
using namespace std;
int main() {
	int c = 0;
	int i = 5;
	/*
	while(true)
	{
		for(int j = 2;j<i;j++)
		{
			if(i%j == 0)
			break;
		}
		if(i == j-1)
	}
	*/
	int sum = 0;
	int num = 0;
	for(int i = 5;;i++)
	{
		int c = 0;
		for(int j = 2;j<i;j++)
		{
			if(i%j == 0)
				c++;
		}
		if(c == 0)
		{
			sum+=i;
			num++;
			cout<<"�Ҽ� "<<num<<"��° : "<<i<<endl;
		}
		if(num == 10)
			break;
	}
	cout<<"5�������� �Ҽ��� �ػ��ϴ� ���� ���� "<<sum<<"�Դϴ�."<<endl;
	return 0;
}
