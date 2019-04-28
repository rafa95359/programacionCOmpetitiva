#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
Long num[10];
int main(){
    Long n;
    cin>>n;
    string a;
    cin>>a;
    para(i,n){
        para(j,(a[i]-'0')+1){
            num[j]++;
        }
    }    
    string resp;
    num[3]+=num[9]*2;
    num[2]+=num[8]*3;
    if(num[7]>0){
        para(i,num[7]){
            resp.push_back('7');
        }
        para(i,7){
            num[i]-=num[7];
        }
    }
    if(num[5]>0){
        para(i,num[5]){
            resp.push_back('5');
        }
        para(i,5){
            num[i]-=num[5];
        }        
    }
    num[3]+=num[6];
    num[2]+=num[6];    
    num[2]+=num[4]*2;  
    
    para(i,num[3]){
        resp.push_back('3');
        num[2]--;
    }    
    para(i,num[2]){
        resp.push_back('2');
    }
    cout<<resp;
    

    return 0;
}
