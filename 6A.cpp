#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    int result = max(a[0]+a[1] - a[2], a[1]+a[2] - a[3]);
    if(result>0){
        cout<<"TRIANGLE"<<endl;
    }else{
        if(result){
            cout<<"IMPOSSIBLE"<<endl;
        }else{
            cout<<"SEGMENT"<<endl;
        }
    }
    return 0;
}