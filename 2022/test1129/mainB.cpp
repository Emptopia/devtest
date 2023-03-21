#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
#include<algorithm>

int main()
{
	int n;
	cin >> n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int left=0;
	int right =n-1;
	long long res =0;
	long long lSum =a[0];
	long long rSum =a[n-1];
	while(left<right)
	{
		if(lSum==rSum)
		{
			res = lSum;
			left++;
			lSum+=a[left];
		}
		else if(lSum <rSum)
		{
			left++;
			lSum+=a[left];
		}
		else
		{
			right--;
			rSum+=a[right];
		}
		//cout << lSum << " " << rSum << endl;
	}
	cout << res << endl;


	system("pause");
	return 0;
} 
