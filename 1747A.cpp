#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t,n,a;
    cin>>t;
    while(t--){
       cin>>n;
       long long sum = 0;
       while(n--){
           cin>>a;
           sum = sum+a;
       }
       cout<<abs(sum)<<endl;
    }
    return 0;
}