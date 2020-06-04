#include <iostream>
using namespace std;
int main() {
	int result[5] = {0,};
	int arr[] = {1,2,3,2,3,1,2,2,4,3,5,0,3,2,1};
	for(int i = 0;i<15;i++)
	{
		
		int swap = arr[i];
		if(swap == 1)
			result[0]++;
		else if(swap == 2)
			result[1]++;
		else if(swap == 3)
			result[2]++;
		else if(swap == 4)
			result[3]++;
		else 
			result[4]++;
	}
	for(int i = 0;i<4;i++)
	{
		cout<<"ÈÄº¸ "<<i+1<<"¹ø °¹¼ö : "<<result[i]<<endl;
	}
	cout<<"¹«È¿Ç¥ °¹¼ö : "<<result[4];
	return 0;
}
