#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int arr[1000][1000];
int mineGold(int n,int m){
    int mine[n][m];
    for(int i=0;i<n;i++){
        mine[i][0]=arr[i][0];
    }
    for(int j=1;j<m;j++){
        for(int i=0;i<n;i++){
            if(i==0){
                mine[i][j]=max(mine[i][j-1],mine[i+1][j-1])+arr[i][j];
            }
            else if(i==n-1){
                mine[i][j]=max(mine[i][j-1],mine[i-1][j-1])+arr[i][j];
            }else{
                mine[i][j]=max({mine[i][j-1],mine[i+1][j-1],mine[i-1][j-1]})+arr[i][j];
            }
        }
    }
    
    Long resp=0;
    for(int i=0;i<n;i++){
        if(mine[i][m-1]>resp)resp=mine[i][m-1];
    }
    return resp;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    
    para(i,0,n){
        para(j,0,m){
            cin>>arr[i][j];
        }
    }   
    cout<<mineGold(n,m)<<endl;
    return 0;
}