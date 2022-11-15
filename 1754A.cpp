#include <iostream>
#include <cstring>
using namespace std;

int main(){ 
    int t; 
    cin>>t;
    while(t--){
        int n,i,q=0;
        char c;
        cin>>n;
        for(i=0;i<n;++i){
            cin>>c;
            if(c=='Q'){
                q++;
            }
            else if(q>0){
                q--;
            }
        }
        
        if(q<=0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}