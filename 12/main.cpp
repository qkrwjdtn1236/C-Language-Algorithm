#include <iostream>
#include <cstdio>
using namespace std;
//9�� �ɻ����� �ɻ��� ����� �ִ밪�� �ּҰ��������� ������ ���� ��� ���ϱ� 
//score[9] = {2,4,7,5,6,9,3,8,1} 
int main() {
	int score[9] = {2,4,7,5,6,9,3,8,1};
	int max = 0,min = 10;
	double sum = 0;
	for(int i = 0;i<9;i++)
	{
		int swap = score[i];
		if(max<swap)
			max = swap;
		if(min>swap)
			min = swap;
		sum+=swap;
	}
	sum = (sum-max-min)/7;
	//cout<<"�ִ밪, �ּҰ� ������ ������ ��� : "<<(double)sum<<endl;
	printf("�ִ밪, �ּҰ� ������ ������ ��� : %.1f",sum);
	return 0;
}
