#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)



int main()
{
    int n;
    cin>>n;

    int input[500100];
    Long sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
        sum += input[i];
    }

    if(sum % 3 != 0)
        cout<<0<<endl;
    else
    {  
        Long buf = 0;
        Long part = sum / 3;
        Long pos[500100];
        for(int i=0; i<n; i++)
        {
            if(i == 0)
                pos[0] = 0;
            else
                pos[i] = pos[i-1];
                
            buf += input[i];
            if(buf == part)
                pos[i]++;
        }

        buf = 0;
        Long ans = 0;
        for(int i=n-1; i>=2; i--)
        {
            buf += input[i];
            if(buf == part)
            {
                ans += pos[i-2];
            }
        }
        cout << ans << endl;
    }

    return 0;
}