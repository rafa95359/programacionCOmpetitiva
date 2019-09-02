#include<bits/stdc++.h>
using namespace std;
int k,n;
vector< int > v;
int f( long long  w ){
    long long sum = 0;
    int cnt = 0;
    for ( int i= n-1 ; i >=0 ; i-- ){
        if ( sum +v[i ]<= w ){
            sum += v[ i ];  
        }else{
            cnt++;
            if ( v[ i ] > w ) return 0;
            sum = v[ i ];
        }
    }
    if ( cnt+1 <= k ) return cnt+1;
    else return 0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int cases;
    cin>>cases;
    for ( int tt = 0 ; tt < cases; tt++ ){
        cin>>n>>k;
        v.clear();
        v.resize(n);
        for ( int i = 0; i < n; i++ ){
            cin>>v[ i ];
        }
        long long  lo = 1, hi = 20000000000LL,mi;
        while( hi -lo> 1){
            mi = (lo+hi)>>1;
            if ( f( mi) ) hi = mi;
            else lo = mi;
        }
        int k1 = f( hi );
        long long sum = 0;
        k1 = k -k1;
        vector< int >answer;
        for ( int i= n-1 ; i >=0 ; i-- ){
            if ( sum +v[i ]<= hi ){
                sum += v[ i ];
                answer.push_back( v[ i ] );
            }else{
                //cnt++;
                 answer.push_back( -1 ); 
                answer.push_back(v[ i ] );
               
                sum = v[ i ];
            }
        }
        reverse(answer.begin(),answer.end());
       
        int oki = 0;
        for ( int i= 0 ; i <(int)answer.size(); i++ ){
            if ( i ) cout<<" ";
            if ( answer[ i ] == -1 ){
                cout<<"/";
            }else{
                if ( k1 > 0 && answer[i]!=-1&&answer[i-1]!=-1 && oki){
                    cout<<"/ ";
                    cout<<answer[ i ];
                    k1--;
                }else{
                    cout<<answer[ i ];
                    oki=1;
                }
            }
            
        }
        cout<<endl;
    }
}
