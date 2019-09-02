#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(i,0,t){
        Long n;
        cin>>n;
        Long arr[n][n];
        bool esValido=true;
        para(j,0,n){
            para(m,0,n){
                cin>>arr[j][m];
                if(m>0 && arr[j][m]==arr[j][m-1]){
                    esValido=false;
                    
                }
            }
        }
        if(esValido){
            para(m,0,n){
                para(j,1,n){
                    if(arr[j][m]==arr[j-1][m]){
                        esValido=false;
                        break;
                    }
                }
            }
        }
        cout<<(esValido ? "Yes":"No")<<endl;
    }   
    return 0;
}