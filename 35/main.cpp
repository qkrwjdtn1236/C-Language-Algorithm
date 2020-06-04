#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int a[] = {18,19,20,22};
	int b[] = {17,19,20,21,23};
	int arr1[9] = {0,};
	cout<<"±³ÁıÇÕ"<<endl;
	int index = 0;
	for(int i = 0;i<5;i++)
	{
		for(int j = 0;j<4;j++)
		{
			if(b[i] == a[j])
			{
				arr1[index] = b[i];
				index++;
				break;
			}
		}
	}
	int arr = index;
	for(int i = 0;i<arr;i++)
	{
		cout<<arr1[i]<<'\t';
	}
	//arr[1]+=a;
	int arr2[9] = a;
	return 0;
}
