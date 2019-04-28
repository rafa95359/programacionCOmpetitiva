#include <bits/stdc++.h>
using namespace std;
int main () {
    int a,x,y;
    cin>>a>>x>>y;
    
   // if (a>=x && a>=y){
   //     if(a==x || a==y || x == 0 || y == 0) cout<<1<<endl;
   // }else{
   //     if(x>=0 && y>=0)
   //     cout<<0<<endl;
   // }      
   //         
   // 
    if(x < 0 || y < 0|| x > a || y > a) cout<<2<<endl;
    else{
       if(a==x || a==y || x == 0 || y == 0) cout<<1<<endl;
       else cout<<0<<endl;
    }
   
}