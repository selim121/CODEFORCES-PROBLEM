#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,n,k,x,i;
	long long int sum;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
		vector<int>v(k);
		for(i=0;i<n;i++)
		{
			cin>>x;
			v[i%k]=max(v[i%k],x);
		}
		sum=0;
		for(auto x:v){
		    sum+=x;
		}
		cout<<sum<<endl;
	}
}