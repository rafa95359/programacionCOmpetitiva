#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long arr[5][5],num[5]={0,1,2,3,4};
    para(i,0,5){
        para(j,0,5){
            cin>>arr[i][j];
        }
    }
    Long max=0;
    do
    {
        Long aux=0;
        for(int i=0;i<5;i++){
            for(int j=i;j+1<5;j+=2){
                aux+=arr[num[j]][num[j+1]]+arr[num[j+1]][num[j]];
            }
        }
        if(aux>max)max=aux;
    } while (next_permutation(num,num+5));
    cout<<max<<endl;
    return 0;
}
