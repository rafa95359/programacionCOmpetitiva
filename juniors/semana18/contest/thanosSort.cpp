#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    Long arr[n];
    Long resp=0;
    para(i,0,n){
        cin>>arr[i];
    }
    Long i=1;
    while(i<=n){

        Long j=0,piv=0;
        bool sePuede=true;
        //cout<<i<<endl;
        while(j<i){
            if(arr[piv+j]>arr[piv+j+1]){
                sePuede=false;
            }
            j++;
            if(j==i){  
                if(sePuede)resp=i;              
                if(piv+i<n){
                    sePuede=true;
                    j=0;
                    piv+=i;
                }
            }

        }
        i=i*2;
    }
    cout<<resp<<endl;
    return 0;
}