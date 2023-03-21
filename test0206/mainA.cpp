#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
#include<unordered_map>

vector<long long>n(1e4);
unordered_map<int,long long>se;
int mod = 1e9+7;

long long f(long long x)
{
	
	if(se[x]>0)
	{
		
		return se[x];	
	}
	long long z=2; 
	while(true)
	{
		if(x%z!=0 || z == x+1) 
		{
			long long res = (f(x-1)+z)%mod;
			
			se[x] = res;
			return res;
		}
		z++;
	}

}

int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		cin >> n[i];
	} 
	se[1] = 2;
	int valid = 1;
	for(int i=0;i<t;i++)
	{
		if(se[n[i]]>0)
		{
			cout << se[n[i]] << endl;
		}
		else
		{
			for(int j=valid;j<=n[i];j++)
			{
				int z =2;
				while(true)
				{
					if(j%z != 0 || z==j+1)
					{
						se[j] = (se[j-1] + z )%mod;
						valid = j;
						break;
					}
					
					z++;
				}	
			}
			cout << se[n[i]] << endl;
			
		}
		
	}
	
	
	
	
	system("pause");
	return 0;
} 


