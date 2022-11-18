#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,m=8,result=0;
        string s;
        for(int i=0;i<m;i++){
            cin>>s;
            if(s=="RRRRRRRR"){
                result = 1;
            }
        }
        if(result==1){
            cout<<"R"<<endl;
        }else{
            cout<<"B"<<endl;
        }
    }
	return 0;
}