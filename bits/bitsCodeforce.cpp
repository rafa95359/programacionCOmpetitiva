    #include <bits/stdc++.h>
    using namespace std;
    #define para(i,a,n) for(int i=a;i<n;i++)
    typedef long long Long ;


    int main(){
        Long n;
        cin>>n;
        para(k,0,n){
            Long a,b;
            cin>>a>>b;
            b++;
            Long x=(a^b);
            Long i=__builtin_clzll(x);
            a=a>>(63-i);        
            a=a<<(63-i);              
            a=a+((1ULL<<(63-i))-1);
            cout<<a<<endl;
            
            
        }

    
        return 0;
    }