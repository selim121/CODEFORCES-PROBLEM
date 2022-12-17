#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k=0,p=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                k++;
            }
        }
        p = k/2;
        for(int i=1;i<n;i++){
            if(s[i]=='1' && p!=0){
                cout<<"-";
                p--;
            }else{
                cout<<"+";
            }
        }
        cout<<endl;
    }
    return 0;
}