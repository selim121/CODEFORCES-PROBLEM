#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char s[n],temp;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(s[j]>s[j+1]){
                    temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                }
            }
        }
        string st = "abcdefghijklmnopqrstuvwxyz";
        int len = st.size();
        for(int i=0;i<len;i++){
            if(st[i]==s[n-1]){
                cout<<i+1<<endl;
            }
        }
    }
    return 0;
}
