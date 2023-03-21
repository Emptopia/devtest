#include<iostream>
using namespace std;
#include<vector>

int main()
{
	int n,m;
	cin >> n >> m;
	vector<int>na(n);
	vector<int>ma(m);
	vector<int>map(1000000);
	vector<int>res;
	for(int i=0;i<n;i++)
	{
		cin >> na[i];
	}
	for(int i=0;i<m;i++)
	{
		cin >> ma[i];
	}
	for(int i=0;i<m;i++)
	{
		if(map[ma[i]])
		{
			res.push_back(map[ma[i]]);
		}
		else
		{
			int temp=-1;
			int left =0,right = na.size()-1;
			int mid =0;
			while(left<right)
			{
				mid = (left+right)/2;
				if(na[mid]<ma[i])left=mid+1;
				else 
				{
					right = mid;
				}
			}
			if(na[mid]==ma[i])temp = left;
			res.push_back(temp);
		}
	}
	for(int i=0;i<res.size();i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;
	
	
	system("pause");
	return 0;
	
}
