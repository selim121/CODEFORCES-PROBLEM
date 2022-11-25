#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1){
            cout<<"1"<<endl;
        }
        else if(n==2){
            cout<<"1 "<<endl<<"1 1"<<endl;
        }else{
            cout<<"1 "<<endl<<"1 1"<<endl;
            for(i=3;i<=n;i++){
                cout<<"1 ";
                for(j=2;j<i; j++){
                    cout<<"0 ";
                }
                cout<<"1"<<endl;
            }
        }
    }
    return 0;
}
