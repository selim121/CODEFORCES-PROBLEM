#include <iostream>
using namespace std;
 
int max2(int a, int b){
    int result;
    if(a>b){
        result=a;
    }else{
        result=b;
    }
    return result;
}
int min2(int a, int b){
    int r=0;
    if(a<b){
        r = r + a;
    }else{
        r = r+b;
    }
    return r;
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,x,y,m=0,p=0;
	    cin>>n;
	    while(n--){
	        cin>>x>>y;
	        m = m + min2(x,y);
	        p =max2(p, max2(x,y));
	    }
	    cout<<(m+p)*2<<endl;
	}
	return 0;
}
