#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long m,n;
    cin>>m>>n;
    
    if ((n==0 && m==1))cout<<0<<" "<< 0 <<endl;
    else{
        if(m*9<n || (n==0 && m>1))cout<<-1<<" "<<-1<<endl;
        else{
            vector<int> min;
            Long aux,m2=m,sum=0;        
            aux = n-(m-1)*9;
            if(aux>1){
                min.push_back(aux);
            }
            else{
                min.push_back(1);
            }
            sum+=min[0];
            m2--;            
            while(m2>0){
                aux = n-(m2-1)*9-sum;
                if(aux>0){
                    min.push_back(aux);
                }
                else{
                    min.push_back(0);
                }
                sum+=min.back();
                m2--;
            }
                  
            para(i,m)cout<<min[i];
            cout<<" ";        
            if(min.back()==0){
                para(i,m)cout<<min[i];
            }else{
                Long k=0;
                while(n){
                    if(n>9){
                        cout<<9;
                        n-=9;
                    }else{
                        cout<<n;
                        n=0;
                    }
                    k++;
                }               
                para(i,m-k){
                    cout<<0;
                }

            }

        }   
    }

    return 0;
}
