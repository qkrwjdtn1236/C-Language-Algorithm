#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
//100���� ������ �������� �����Ͽ� ������ 77�� ���� ����� ���� ã�� ����ϴ� ���α׷� 
int main() {
	int no = 0, min = 100;
	int arr[101] = {0,};
	srand((unsigned)time(NULL));
	for(int i = 0;i<100;i++)
	{
		arr[i] = rand()%100+1; 
		cout<<i+1<<"��° ��� ����Ʈ : "<<arr[i]<<"��"<<endl;
		if(abs(77-arr[i])<min)
		{
			min = abs(77-arr[i]);
			no = i;
		}
	}
	cout<<"��� ����Ʈ 77�� ���� ����� ���� "<<arr[no]<<"�̸�, ����� "<<no+1<<"��° �Դϴ�."<<endl; 
}
