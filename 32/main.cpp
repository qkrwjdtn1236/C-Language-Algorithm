#include <iostream>
using namespace std;
//9*9배열에 실행한것처럼 출력하시오. 
int main() {
	int arr[9][9] = {{0,},};
	int i,j,sum = 0,count = 0; //[0][0]~[4][9]에 해당 
	int num = 9/2+1;
	
	for(i = 0;i<num;i++)
	{
		for(j = 0;j<9-i;j++)
		{
			sum++;
			arr[j][i] = sum;
		}
	}
	
	
	for(i = num;i<9;i++)//그의 나머지 
	{
		count++;
		for(j = 0;j<num+count;j++)
		{
			sum++;
			arr[j][i] = sum;
		}
	}
	
	for(i = 0;i<9;i++)//배열 출력 
	{
		for(j = 0;j<9;j++)
		{
			if(arr[i][j] == 0)
				cout<<"   "; //빈공간은 2자리 숫자이기에 공백을 2칸 
			else
				cout<<arr[i][j]<<" ";//가독성으로 인해서 뒤에 한자리 공백 
		}
		cout<<endl; 
	}
	return 0;
}
