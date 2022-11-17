#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,a,p=10,q=9;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
        }
        cout<<(p-n)*(q-n)*3<<endl;
    }
	return 0;
}
