#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;


int main(){
    int n;  
    cin >>n;  
    string a;
    cin>>a;
    

   for( int i=0;i<n-1;i++){      
       if( (a[i] =='0' && a[i+1]=='1') || (a[i] == '1' && a[i+1]=='0') ){
        a.erase(a.begin()+i,a.begin()+i+2);
        if(i>0)i-=2;
        else i--;          
       }
    }
    cout<<a.size()<<endl;




   
    return 0;
}
