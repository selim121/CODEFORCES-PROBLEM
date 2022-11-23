#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i;
        string s,a;
        cin>>n>>s;
        a = "";
        for(i=n-1;i>=0;i--){
            if(s[i]=='0'){
                a = char(s[--i]+10*s[--i]+80)+a;
            }else{
                a = char(s[i]+48)+a;
            }
        }
        cout<<a<<endl;
    }

    return 0;
}