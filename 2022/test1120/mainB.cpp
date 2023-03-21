#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>


int main()
{
	int t;
	cin >>t;
	vector<int>n(t);
	vector<int>m(t);
	for(int i=0;i<t;i++)
	{
		cin >> n[i] >> m[i];
	}
	vector<int>res;
	for(int i=0;i<t;i++)
	{
		vector<int>nums(n[i]+1);
		int ress=0;
		
		nums[1]=1;
		nums[2]=1;
		for(int x=3;x<=n[i];x++)
		{
			nums[x] = nums[x-1] + nums[x-2];
			//cout << "nums[" << x << "] = " << nums[x] << endl; 
			if(m[i]%nums[x]==0)
			{
				//cout << nums[x] << "ÊÇ±¶Êý:" << m[i] << endl;
				ress++;
			}
		}
		res.push_back(ress);
	
	}
		for(int i=0;i<t;i++)
	{
		cout << res[i] << endl;
	}

	

	system("pause");
	return 0;
} 
