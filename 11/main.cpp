#include <iostream>
using namespace std;
// ����Ʈ�� �ۿ��� �ȴ� ���� ��ŭ ����ϴ� ��, ��� �ݾ��� ���(��, ������ ���� �Ÿ��� �迭�� ��Ÿ�� gibu[7] = {15,10,12,20,16,22,10};
//1km = 50�� , 10km ������ 1km 70��, 20km������ 1km�� 100��, 50km�� 150��, 100km�� 200���� ����Ѵ�.
int main() {
	int swap = 0;
	int sum = 0;
	int gibu[7]=  {15,10,12,20,16,22,10};
	for(int i = 0;i<7;i++)
	{
		swap = gibu[i];
		if(swap>=100)
			sum = sum+swap*200;
		else if(swap>=50)
			sum = sum+swap*150;
		else if(swap>=20)
			sum = sum+swap*100;
		else if(swap>=10)
			sum = sum+swap*70;
		else
			sum = sum+swap*50;
	}
	cout<<"1���� ��ξ��� "<<sum<<"�� �Դϴ�."<<endl; 
	return 0;
}
