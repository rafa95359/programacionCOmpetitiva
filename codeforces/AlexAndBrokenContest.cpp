#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)


using namespace std;
int main(){
    string c;
    cin>>c;
    string amigos[]={"Danil", "Olya", "Slava", "Ann","Nikita"};
    Long cant=0;
    para(i,5){
        int found = c.find(amigos[i]);
        if ( found !=-1){
            cant++;
            if(c.find(amigos[i],found+1) !=-1)cant++;
        }

    }

    if(cant==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
