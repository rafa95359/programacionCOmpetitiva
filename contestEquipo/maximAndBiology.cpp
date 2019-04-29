#include <bits/stdc++.h>
typedef long long Long;
#define para(i,a,n) for(Long i=a;i<n;i++)
#define pb push_back
using namespace std;
Long minimoParaLlegar(char a,char b){
    if(int(a)==int(b))return 0;
    if(int(b)>int(a)){
        return min(a-'A'+'Z'-b+1,int(b)-int(a));
    }else{
        return min(b-'A'+'Z'-a+1,int(a)-int(b));
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long  n;
    cin>>n;
    string a;
    cin>>a;
    Long min=1000;

    para(i,0,n-3){
        Long aux=minimoParaLlegar(a[i],'A')+minimoParaLlegar(a[i+1],'C')+minimoParaLlegar(a[i+2],'T')+minimoParaLlegar(a[i+3],'G');
        if(aux<min)min=aux;
    }
    cout<<min<<endl;

    return 0;
}