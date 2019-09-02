#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(int i=0;i<(Long)n;i++)
typedef long double Double;

using namespace std;
int main(){
    int n;
    string pal;
    cin>>n;
    cin>>pal;
    if(pal.find("xxx")==-1) cout<<0<<endl;
    else{
        int found =pal.find("xxx");
        int cant=0;
        while(found!=-1){
            pal.erase(pal.begin());
            found=pal.find("xxx",found);
            cant++;
        }
       cout<<cant<<endl;
    }
    return 0;
    
}