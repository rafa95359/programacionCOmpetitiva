#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;


Long resp(Long a,Long b,Long c,Long x,Long y,Long z){
    if( (a==0 && b==0 && c!=0) || (x==0 && y==0 && z!=0 ))return 0;
    if( (a==0 && b==0 && c==0) || (x==0 && y==0 && z==0 ))return -1;
    
    

    if(a*y== b*x){
        
        if(a==0){
            swap(a,b);
            swap(x,y);
        }
       
        if(a*z==x*c) return -1;
        return 0;
        
    }
    else{
        return 1;
    }
     



}


int main(){
    Long a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    cout<<resp(a,b,c,x,y,z);

    return 0;
}
