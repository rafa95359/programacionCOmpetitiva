#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<=n;i++)
#define N 1000000
typedef long long Long ;
#define maxN 100
int n, m, f[maxN][maxN];
string x, y;

void solve_dp() {
    n=x.size();
    m=y.size();
    para (i, 0, n) f[i][0] = i;
    para (j, 0, m) f[0][j] = j;
    para (i, 1, n)
        para (j, 1, m)
            if (x[i - 1] == y[j - 1])
                f[i][j] = f[i - 1][j - 1];
            else
                f[i][j] = min(f[i - 1][j], min(f[i - 1][j - 1], f[i][j - 1])) + 1;
}

void result_trace() {
    cout<<f[n][m]<<"\n";
    int step = 0, i = n, j = m;
    while (i || j) {
        if (x[i - 1] == y[j - 1]) {
            i--, j--;
            continue;
        }
        cout<<++step<<" ";
        if (i > 0 && f[i][j] == f[i - 1][j] + 1) { // delete
            cout<<"Delete "<<i<<"\n";
            //x.erase(i - 1, 1);
            i--;
        }
        else if (j > 0 && f[i][j] == f[i][j - 1] + 1) { // insert
            cout<<"Insert "<<i + 1<<","<<y[j - 1]<<"\n";
            //x.insert(i, 1, y[j - 1]);
            j--;
        }
        else if (i > 0 && j > 0) {  // replace
            cout<<"Replace "<< i<<","<< y[j - 1]<<"\n";
            //x[i - 1] = y[j - 1];
            i--, j--;
        }
    }
}

int main() {
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin>>x>>y){
        solve_dp();
        result_trace();
        cout<<"\n";

    }
    return 0;
}
