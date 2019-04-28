#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    set<int>s;
    int a[n+1];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);

    for(int i=0;i<n;i++)
    {
        if(a[i]%k!=0 or s.count(a[i]/k)==0)
        s.insert(a[i]);
    }
    cout<<s.size();
}