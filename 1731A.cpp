#include<bits/stdc++.h>
using namespace std;
 
int main(){
	long long t,n,a,b;
	cin>>t;
	while(t--){
		cin>>n;
		b=1;
		for(int i=1;i<=n;++i){
		    cin>>a;
		    b*=a;
		}
		long long int result = 2022*(b+n-1);
		cout<<result<<endl;
	}
	return 0;
}
