#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    para(i,0,n){
        string a;
        cin>>a;
        set<Long> x;
        para(j,0,a.size()){
            x.insert(a[j]-'a');
        }
        if(x.size()!=a.size())cout<<"No"<<endl;
        else{
            auto it1=x.begin();
            auto it2=it1;
            it2++;
            bool sePuede=true;
            para(j,0,x.size()-1){
                if(*it2!=*it1+1){
                    sePuede=false;
                    break;
                }
                it2++;
                it1++;
            }
            if(sePuede)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
            
        }
    }
    return 0;
}