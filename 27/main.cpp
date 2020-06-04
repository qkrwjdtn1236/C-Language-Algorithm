#include <iostream>
using namespace std;
//1Â÷¿ø ¹è¿­¿¡ ÀÖ´Â°ª¿¡ ´ëÇØ µ¡¼À,»¬¼À,°ö¼À,³ª´°¼ÀÀ» ±¸ÇÏ´Â ¾Ë°í¸®Áò. 
int main() {
	int A[] = {2,3,5,9,10};
	int B[] = {1,2,3,4,5};
	for(int i = 0;i<sizeof(A)/sizeof(int);i++)
	{
		cout<<i+1<<" ¹øÂ° µ¡¼À "<<A[i]+B[i]<<endl;
		cout<<i+1<<" ¹øÂ° »¯¼À "<<A[i]-B[i]<<endl;
		cout<<i+1<<" ¹øÂ° °ö¼À "<<A[i]*B[i]<<endl;
		cout<<i+1<<" ¹øÂ° ³ª´°¼À "<<A[i]/B[i]<<endl;
		cout<<endl; 
	}
	return 0;
}
