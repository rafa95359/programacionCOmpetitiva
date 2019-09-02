#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
char mayor(char a){
    switch (a)
    {
    case 'a':
        return 'e';
        break;
    case 'e':
        return 'i';
        break;
    case 'i':
        return 'o';
        break;
    case 'o':
        return 'u';
        break;
    
    default:
        return 'a';
        break;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;   
    Long fila=0,columna=0;
    para(i,5,n/2+1){
        if(n%i==0 && n/i>4){
            fila=i;            
            columna=n/i;
            break;
        }
    }
    if(fila!=0){
        char pala[fila][columna];
        pala[0][0]='a';
        para(i,1,columna){
            pala[0][i]=mayor(pala[0][i-1]);
        }
        para(i,1,fila){
            para(j,0,columna){
                pala[i][j]=mayor(pala[i-1][j]);
            }
        }
        
        para(i,1,fila){
            para(j,0,columna){
                pala[i][j]=mayor(pala[i-1][j]);
            }
        }
        
        para(i,0,fila){
            para(j,0,columna){
               cout<<pala[i][j];
            }
        }

    }else cout<<-1<<endl;
    return 0;
}