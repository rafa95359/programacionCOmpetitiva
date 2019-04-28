
#include <bits/stdc++.h>

using namespace std;
int main () {
    int n,k,x=0,y=0;
    cin>>n>>k;
    if ( ((n-1)*n)/2 <= k ) cout<< "no solution"<<endl;
    else {
        for ( int i=0; i<n; i++){            
            cout<<x<<" "<<y<<endl;
            y++;
        }
    }
}
