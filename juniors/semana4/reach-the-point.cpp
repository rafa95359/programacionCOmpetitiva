#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;
int resp(Long x,Long y){
    x=abs(x);
    y=abs(y);
    if(x==y)return 2*x;
    if(x<y){
        Long resp=2*x;
        if((y-x)%2==0)resp+=(y-x)*2;
        else resp+=(y-x)*2-1;
        return resp;
        
    }
    else{
        Long resp=2*y;
        if((x-y)%2==0)resp+=(x-y)*2;
        else resp+=(x-y)*2+1;
        return resp;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(i,t){
        Long x;
        Long y;
        cin>>x>>y;
        cout<<resp(x,y)<<endl;

    }

}