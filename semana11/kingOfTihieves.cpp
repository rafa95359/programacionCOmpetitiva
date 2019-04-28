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
    string a;
    cin>>a;
    para(i,0,n){
        if(a[i]=='*'){
            para(j,1,n/4+1){
                    Long can=0;
                para(k,1,5){
                    if(i+j*k>n-1)break;
                    if(a[i+j*k]=='*')can++;
                }
                if(can==4){
                    cout<<"yes"<<endl;
                    return 0;
                }
            }
        }
    }   
    cout<<"no"<<endl;
    return 0;
}