    #include <bits/stdc++.h>
    using namespace std;
    typedef long long Long;
    #define para(i,n) for(Long i=0;i<(Long)n;i++)
    int main(){
        string n;
        cin>>n;
        Long x;

        if(n.size()>1) x= stoi(n.substr(n.size()-2,2));
        else {
            if(n[0]=='0'){
                cout<<1<<endl;
                return 0;
            }
            x=stoi(n);
        }
        switch (x%4)
        {
            case 1 :
                cout<<8<<endl;
                break;
            case 2 :
                cout<<4<<endl;
                break;
            case 3 :
                cout<<2<<endl;
                break;
            default:
                cout<<6<<endl;
                break;
        }
        return 0;
    }
