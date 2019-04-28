#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    para(t,0,n)   {
        string a;
        cin>>a;
        set<char> x;
        para(i,0,a.size()){
            x.insert(a[i]);
        }
        if(x.size()!=a.size()){
            cout<<"NO"<<endl;
            continue;
        }
        char l=*x.lower_bound('a');
        Long y=0;
        bool se=true;
        for(auto m:x){
            if(m!=char(l+y)){
                cout<<"NO"<<endl;
                se=false;
                break;
                
            }
            y++;
        }
        if(se){
            cout<<"YES"<<endl;
        }
        

    }
    return 0;
}