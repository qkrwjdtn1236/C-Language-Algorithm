#include <iostream>
using namespace std;
//9*9�迭�� �����Ѱ�ó�� ����Ͻÿ�. 
int main() {
	int arr[9][9] = {{0,},};
	int i,j,sum = 0,count = 0; //[0][0]~[4][9]�� �ش� 
	int num = 9/2+1;
	
	for(i = 0;i<num;i++)
	{
		for(j = 0;j<9-i;j++)
		{
			sum++;
			arr[j][i] = sum;
		}
	}
	
	
	for(i = num;i<9;i++)//���� ������ 
	{
		count++;
		for(j = 0;j<num+count;j++)
		{
			sum++;
			arr[j][i] = sum;
		}
	}
	
	for(i = 0;i<9;i++)//�迭 ��� 
	{
		for(j = 0;j<9;j++)
		{
			if(arr[i][j] == 0)
				cout<<"   "; //������� 2�ڸ� �����̱⿡ ������ 2ĭ 
			else
				cout<<arr[i][j]<<" ";//���������� ���ؼ� �ڿ� ���ڸ� ���� 
		}
		cout<<endl; 
	}
	return 0;
}
