#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long q;
    cin>>q;
    para(i,0,q){
        Long n,k;
        cin>>n>>k;
        Long impar=0;
        vector<Long > resp;
        para(j,0,n){
            Long x;
            cin>>x;
            if(x%2!=0){
                impar++;
                resp.push_back(j);
            } 
        }
        if(impar>=k){
            if(impar==k){
                cout<<"YES"<<endl;
                para(j,0,resp.size()-1){
                    cout<<resp[j]+1<<" ";
                }
                 cout<<n<<endl;
            }else{
                Long dif=impar-k+1;
                if(dif%2==0){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                    para(j,0,k-1){
                        cout<<resp[j]+1<<" ";
                    }
                    cout<<n<<endl;
                }
            }
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}