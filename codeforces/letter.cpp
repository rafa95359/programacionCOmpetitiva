#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;

int main(){
    string head;
    string text;
    getline(cin,head);
    getline(cin,text);
    string resp="YES";
    para(i,text.size()){
            if(text[i]!=' '){
            int found =head.find(text[i]);
            if( found == -1){
                resp.clear();
                resp.append("NO");
            }
            else{
                head.erase(head.begin()+found);
            }
        }
    }
    cout<<resp<<endl;
    

    return 0;
}
