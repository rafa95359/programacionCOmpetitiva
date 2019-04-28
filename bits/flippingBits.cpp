    #include <bits/stdc++.h>
    using namespace std;
    #define para(i,n) for(Long i=0;i<n;i++)
    typedef long long Long ;
    Long m=(1ULL<<32)-1;
    int main(){
        Long q;
        cin>>q;       
        para(i,q){
            Long aux;
            cin>>aux;
            cout<<(aux^m)<<endl;
        }
        return 0;
    }