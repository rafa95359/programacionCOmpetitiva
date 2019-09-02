#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 100008
#define M 1000000007
typedef long long Long ;
Long mod1[N];
Long arr[N];
Long formulin[10]={0,1,3,6,10,15,21,28,36,45};
Long expM(Long x,Long n,Long p){
    Long ans = 1;
    x%=p;
    while ( n ){
        if( n & 1 )ans = ( ans * x )%p;
        x = (x*x)%p;
        n >>= 1;
    }
    return ans%p;
}
void rellMod(string s){
  Long resp=0;
  for(Long i=s.size()-1;i>=0;i--){
      Long cifra=(Long)(s[i]-'0');
      resp+=(cifra*expM(10,s.size()-1-i,M))%M;
      mod1[s.size()-1-i]=(resp+1)%M;
  }
}
Long metodo2(Long a,string s){
  Long resp=0;
  for(Long i=a;i<=s.size()-1;i++){
      Long cifra=(Long)(s[i]-'0');
      resp=(resp*10+cifra)%M;
  }
  return resp%M;
}
void rellenar(){
  Long fijo=0;
  arr[0]=0;
  arr[1]=0;
  para(i,2,N+1){
    fijo=(fijo*10)%M+(45*expM(10,2*(i-2),M))%M;
    arr[i]=fijo%M;
  }
}

Long encoding(Long n , string a){
  Long resp=0;
  Long parcial=0;
  a.push_back('0');
  para(i,0,n-1){
    Long cifra=(Long)(a[i]-'0');
    Long cifra1=(Long)(a[i+1]-'0');
    if(cifra==0)continue;
    parcial=(arr[n-1-i]*cifra)%M+(formulin[cifra-1]*expM(10,2*(n-i-2),M))%M;
    resp+=parcial;
    //cout<<" cifra : " <<cifra<<endl;
    //cout<<" parcial: "<<parcial<<endl;
    if(cifra<cifra1){
      parcial=(cifra*expM(10,2*(n-i-2),M))%M;
      resp+=parcial;
    }else if(cifra==cifra1){
      Long ayu;
      if(i==n-2)ayu=1;
      else ayu=mod1[n-i-3];
      parcial=(((expM(10,n-i-2,M)*ayu)%M)*cifra)%M;
      resp+=parcial;
    }
    resp=resp%M;
    //cout<<" parcial2: "<<parcial<<endl;
    //cout<<endl;
  }
  return resp%M;

}
void restar1(string &x,Long &n){
  for(Long i=n-1;i>=0;i--){
    if(x[i]=='0'){
      x[i]='9';
    }else{
      x[i]=x[i]-1;
      break;
    }
  }
  if(x[0]=='0' && n>1){
    x.erase(0,1);
    n=n-1;
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Long t;
  cin>>t;
  rellenar();
 //para(i,0,100){
 //  cout<<i<<" "<<arr[i]<<endl;
 //}
  para(i,0,t){
    Long a,b;
    string n,m;
    cin>>a>>n>>b>>m;
    restar1(n,a);
    rellMod(n);
    Long valor=metodo2(0,n);
    Long aux=encoding(a,n);    
    Long resp1=((valor*(valor+1))/2)%M;
    rellMod(m);
    Long valor2=metodo2(0,m);
    Long aux2=encoding(b,m);
    Long resp2=((valor2*(valor2+1))/2)%M;
    Long respParcial1=resp2-aux2,respParcial2=resp1-aux;
    if(resp2<aux2){
      respParcial1=(resp2-aux2+M)%M;
    }
    if(resp1<aux){
      respParcial2=(resp1-aux+M)%M;
    }
    Long respFinal=respParcial1-respParcial2;
    if(respParcial1<respParcial2){
      respFinal=(respFinal+M)%M;
    }
    cout<<respFinal<<endl;
  }  
  return 0;
}