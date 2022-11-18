#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1="yES",s2="yeS",s3="yEs",s4="Yes",s5="YeS",s6="YEs",s7="yes",s8="YES";
        cin>>s;
        if(s==s1 || s==s2 || s==s3 || s==s4 || s==s5 || s==s6 || s==s7 || s==s8){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}