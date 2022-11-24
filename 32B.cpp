#include <bits/stdc++.h>
using namespace std;

int main() {
    int i;
    string s;
    cin>>s;
    int len = s.size();
    for(i=0;s[i];i++){
        if(s[i]=='.'){
            cout<<"0";
        }else{
            if(s[++i]=='.'){
                cout<<"1";
            }else{
                cout<<"2";
            }
        }
    }
    cout<<endl;
    
    return 0;
}