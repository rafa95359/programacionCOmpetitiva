#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;


/*1 2 3 menores*mayores
1 3 2   cMenores en 2
2 3 1   cMenores en 2
2 1 3   cMyores en 2
3 1 2   cMayores en 2
3 2 1   mayores*menores
*/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(i,0,t){
        Long n;
        cin>>n;
        Long a,b,c;
        cin>>a>>b>>c;
        map<Long,Long> menores,mayores;
        

        para(j,0,n-1){
            Long x,y;
            cin>>x>>y;
            if(x>y){
             mayores[y]++;
             menores[x]++;   
            }
            else{
                mayores[x]++;
                menores[y]++;
            }
        }
        Long resp=0;
        if(b==2){
            for(Long k=1;k<=n;k++ ){
                resp+=mayores[k]*menores[k];
            }
        }else if(b==1){
            for(Long k=1;k<=n;k++){
                resp+=(mayores[k]*(mayores[k]-1))/2;
            }
        }else{
            for(Long k=1;k<=n;k++){
                resp+=(menores[k]*(menores[k]-1))/2;
            }
        }
        cout<<resp<<endl;

    }
    return 0;
}