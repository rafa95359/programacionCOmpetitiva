#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long getBit(Long x, Long i){
	return (x >> i) & 1LL;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    Long a[n];
    para(i,0,n){
        cin>>a[i];
    }
    for(Long mask = 0; mask < (1LL << n); mask++ ) {
        Long num=0;
		for(Long i = 0; i < n; i++) {		
			if(getBit(mask , i) == 1) {
				num+=a[i];
			}else{
				num-=a[i];
			}
		}
        if(num%360==0){
            cout<<"YES"<<endl;
            return 0;
        }		
	}
    cout<<"NO"<<endl;
	
    return 0;
}