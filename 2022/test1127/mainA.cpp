#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
#include<algorithm>

int main()
{
	int n;
	cin >> n;
	vector<char>s(n);
	for(int i=0;i<n;i++)
	{
		cin >> s[i];
	}
	sort(s.begin(),s.end());
	int count1 =1;
	int count2 =0;
	long long res=0;
	for(int left =0 ;left<n;left++)
	{
		//cout << left << "´Î" <<endl; 
		for(int right = left +1;right<n;right++)
		{
			if(s[left]==s[right])
			{
				count1 ++;
			}
			else if(s[left]+1 == s[right])
			{
				count2 ++;
			}
			else
			{
				break;
			}	
		}
		int temp = count1 * count2;
		//cout << left << "ÏàÁÚ" << temp << endl;
		res += temp; 
		left += (count1-1);
		count1=1;
		count2=0;
		
		
	}
	cout << res << endl;

	system("pause");
	return 0;
} 
