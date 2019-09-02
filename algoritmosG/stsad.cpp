#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string x;
    cin>>x;
    x.push_back('z');
    vector<Long> a;
    Long can=1;
    para(i,1,x.size()){
        if(x[i]==x[i-1]){
            can++;
        }
        else{
            a.push_back(can);
            can=1;
        }

    } 
   // cout<<"arr a"<<endl;
   //para(i,0,a.size())cout<<a[i]<<" ";
    //cout<<endl;
    Long par=0,impar=0;
    para(i,0,a.size()){
        Long a1=(a[i]+1)/2;
        Long a2=a[i]/2;
        if(a[i]%2==0){
            impar+=a2*(a2+1);
            par+=a1*a1;
        }else{
            par+=a2*(a2+1);
            impar+=a1*a1;
        }
        
    }
     
    //cout<<"par "<<par<<" impar "<<impar<<endl;
    Long con=2;
    vector<Long> suma;
    suma.push_back(a[0]);
    para(i,1,a.size()){
        suma.push_back(a[i]+suma[i-1]);
    }
    //cout<<" suma "<<endl;
    //para(i,0,suma.size())cout<<suma[i]<<" ";
    


    vector<Long> v1,v2;
    para(i,0,a.size()){
        v2.push_back(a[i]/2);
        v1.push_back((a[i]+1)/2);
    }
    /*vector<Long> sumi,sump;
    sumi.push_back(v1[0]);
    sump.push_back(v2[0]);
    para(i,1,v1.size()){
        sumi.push_back(v1[i]+sumi[i-1]);
        sump.push_back(v2[i]+sump[i-1]);
    }*/
    Long sum1=0,sum2=0;
    Long sum3=0,sum4=0;
    Long b1=0,b2=0;
    Long b3=0,b4=0;
    for(Long i=2;i<a.size();i+=2){
        if(suma[i-1]%2==0){
            sum3+=v2[i];//j2 distancia par
            sum1+=v1[i];//j1 distancia par
        }
        else{
            sum4+=v2[i];
            sum2+=v1[i];
        }
    }
    for(Long i=1;i<a.size();i+=2){
        if(suma[i-1]%2==0){
            b3+=v2[i];
            b1+=v1[i];
        }
        else{
            b4+=v2[i];
            b2+=v1[i];
        }
    }
    Long acu1=0;
    Long acu2=0;
    Long acu3=0;
    Long acu4=0;
    for(int i=0;i<a.size();i+=2){
        if(i>0){
            if(suma[i-1]%2==0){
                acu1+=v1[i];
                acu3+=v2[i];
            }else{
                acu2+=v1[i];
                acu4+=v2[i];
            }
        }
        if(suma[i]%2==0){
            par+=v1[i]*(sum1-acu1)+v2[i]*(sum3-acu3);
            impar+=v2[i]*(sum2-acu2)+v1[i]*(sum4-acu4);
        }else{
            impar+=v1[i]*(sum1-acu1)+v2[i]*(sum3-acu3);
            par+=v2[i]*(sum2-acu2)+v1[i]*(sum4-acu4);
        }
        
    }
    acu1=0;
    acu2=0;
    acu3=0;
    acu4=0;
    for(int i=1;i<a.size();i+=2){
        if(i>0){
            if(suma[i-1]%2==0){
                acu1+=v1[i];
                acu3+=v2[i];
            }else{
                acu2+=v1[i];
                acu4+=v2[i];
            }
        }
        if(suma[i]%2==0){
            par+=v1[i]*(b1-acu1)+v2[i]*(b3-acu3);
            impar+=v2[i]*(b2-acu2)+v1[i]*(b4-acu4);
        }else{
            impar+=v1[i]*(b1-acu1)+v2[i]*(b3-acu3);
            par+=v2[i]*(b2-acu2)+v1[i]*(b4-acu4);
        }
        
    }
    
    //cout<<endl;
    /* for(int j=0;j<a.size();j++){
        for(int i=j+2;i<a.size();i+=2){
           // cout<<"i "<<i<<" j "<<j<<" aj"<<a[j]<<" ai "<<a[i]<<" aux1 aux2 ";
            Long aux1=((a[j]+1)/2)*((a[i]+1)/2)+(a[j]/2)*(a[i]/2);
            Long aux2=((a[j]+1)/2)*(a[i]/2)+(a[j]/2)*((a[i]+1)/2);
           // cout<<aux1 <<" "<<aux2<<endl;
            if((suma[i-1]-suma[j])%2==0){
                par+=aux1;
                impar+=aux2;
            }else{
                par+=aux2;
                impar+=aux1;
            }
        }
    }*/
    cout<<par<<" "<<impar<<endl;
    return 0;
}