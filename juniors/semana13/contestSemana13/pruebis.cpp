#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(Long i=a;i<n;i++)
typedef long long Long ;
Long getBit(Long x, Long i){
	return (x >> i) & 1LL;
}
void turnOn(Long &x, Long i){
	x = x | (1LL << i);
}
bool aux(Long a,Long b){
    Long res=0;
    
    para(i,0,5){
        if(getBit(a,i) or getBit(b,i)) turnOn(res,i);
        
    }
    if(res==31)return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;

    map<char,Long> vocal={{'a',16},{'e',8},{'i',4},{'o',2},{'u',1}};
    para(i,0,t){
        Long n;
        cin>>n;
        map<Long,Long>arr;
        para(j,0,n){
            string aux;
            cin>>aux;
            set<char> x;
            para(k,0,aux.size()){
                x.insert(aux[k]);
            }
            Long sum=0;
            for(auto k:x){
                sum+=vocal[k];
            }
            arr[sum]++;
        }
        Long resp=0;
        for(auto it=arr.begin();it!=arr.end();it++){
            auto it2=it;
            it2++;
            for(it2;it2!=arr.end();it2++){
                if(aux(it->first,it2->first)){
                    resp+=it->second*it2->second;
                }
            }
        }
        resp+=(arr[31]*(arr[31]-1))/2;
        cout<<resp<<endl;
    }
    return 0;
}