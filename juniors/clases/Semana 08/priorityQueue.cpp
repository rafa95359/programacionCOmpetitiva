#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	priority_queue<Long> qMax;
	qMax.push(5);
	qMax.push(1);
	cout << qMax.top() << endl;
	
    priority_queue<Long , vector<Long> , greater<Long> > qMin;
    qMin.push(5);
    qMin.push(1);
    cout << qMin.top() << endl;

    return 0;
}

