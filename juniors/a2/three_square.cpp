#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 50001
typedef long long Long ;

bool valores[50001];
int arr[50001][4];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> sq;
    for(int i=0;i*i<50001;i++){
        sq.push_back(i*i);
    }
    vector<int> sq2[2]; 
    for(int i=0;i<sq.size();i++){
        for(int j=i;j<sq.size();j++){
            int value=sq[i]+sq[j];
            if(value>50000 || valores[value])continue;
            valores[value]=true;
            sq2[0].push_back(sq[i]);
            sq2[1].push_back(sq[j]);
            
        }
    }

    for(int i =0;i<sq.size();i++){
        for(int j=0;j<sq2[0].size();j++){
            int value=sq[i]+sq2[0][j]+sq2[1][j];            
            if(value>50000 || arr[value][0]==1){
               continue;
            }
            arr[value][0]=1;
            arr[value][1]=sq[i];
            arr[value][2]=sq2[0][j];
            arr[value][3]=sq2[1][j];            
            

        }
    }
    para(i,0,n){
        int aux;
        cin>>aux;
        if(arr[aux][0]==1){
            multiset <int> x;
            x.insert(sqrt(arr[aux][1]));
            x.insert(sqrt(arr[aux][2]));
            x.insert(sqrt(arr[aux][3]));
            auto it2=x.begin();
            cout<<*it2<<" ";
            it2++;
            cout<<*it2<<" ";
            it2++;
            cout<<*it2<<endl;
            
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}