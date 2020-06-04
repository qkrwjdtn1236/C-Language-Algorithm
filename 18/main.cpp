#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
	int intname;
	char charname[4];
	int sum[3] = {0,};
	char name[80][4] = {{0,},};
	int arr1[80];
	int eng[80];
	int score[80];
	int rank[80]= {0,};
	int a[80];
	srand((unsigned)time(NULL));
	for(int i = 0;i<80;i++)
	{
		for(int j = 0;j<3;j++)
		{
			name[i][j] = rand()%25+65;
		}
		arr1[i] = rand()%51+50;
		eng[i] = rand()%51+50;
		score[i]= rand()%51+50;
		sum[0]+=arr1[i];
		sum[1]+=eng[i];
		sum[2]+=score[i];
		a[i] = arr1[i]+eng[i]+score[i];
	}
	for(int i = 0;i<80;i++)
	{
		for(int j = 0;j<80;j++)
		{
			if(a[i]<=a[j])
				rank[i]++;
		}
	}
	for(int i = 0;i<79;i++)
	{
		for(int j = i;j<80;j++)
		{
			if(rank[i]>rank[j])
			{
				intname = rank[i];
				rank[i] = rank[j];
				rank[j] = intname;
				
				intname = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = intname;
				
				intname = eng[i];
				eng[i] = eng[j];
				eng[j] = intname;
				
				intname = score[i];
				score[i] = score[j];
				score[j] = intname;
				
				strcpy(charname,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],charname);
			}
		}
	}
	for(int i = 0;i<80;i++)
	{
		printf("%2d ¹ø ÇÐ»ý : %s %3d %3d %3d %3dµî\n",i+1,name[i],arr1[i],eng[i],score[i],i+1);
	}
	cout<<"ÇÐÁ¡ ÃÑÁ¡ : "<<sum[0]<<endl;
	cout<<"¿µ¾îÁ¡¼ö ÃÑÁ¡ : "<<sum[1]<<endl;
	cout<<"ºÀ»çÁ¡¼ö ÃÑÁ¡ : "<<sum[2]<<endl;
	return 0;
}
