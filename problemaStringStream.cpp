#include <bits/stdc++.h>

using namespace std;

vector<int> parseInts(string str) {
	vector <int> myvector;
    str.append("X");
    stringstream aux(str);

    cout << "str"<<str << endl;

    int i=0;
    char b=',';
    int a;
    while(b == ',' || b ==','){        
        aux >> a >> b;      
        myvector.push_back(a);
    }
    return myvector;
    
        
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}