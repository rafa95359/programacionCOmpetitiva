#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    map <string,Long> que;
    para(i,n){
        Long a,marca;
        string alumno;
        cin>>a>>alumno;
        switch(a){
            case 1:
                cin>>marca;
                que[alumno]+=marca;
                break;
            case 2:
                que[alumno]=0;
                break;
            default:
                cout<<que[alumno]<<endl;
                break;
        }
    }



    return 0;
}