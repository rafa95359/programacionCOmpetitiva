#include <bits/stdc++.h>
using namespace std;
int main(){
    char let[13]={'1','2','3','4','5','6','7','8','9','0','a','b','c'};
    for(int i=0;i<13;i++){
        for(int j=0;j<13;j++){
            for(int k=0;k<13;k++){
                for(int m=0;m<13;m++){
                    for(int r=0;r<13;r++){
                        for(int a=0;a<13;a++){
                            for(int t=0;t<13;t++){
                                for(int q=0;q<13;q++){
                                    cout<<let[i]<<let[j]<<let[k]<<let[m]<<let[r]<<let[a]<<let[t]<<let[q]<<endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}