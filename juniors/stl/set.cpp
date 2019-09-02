#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)

int main ()
{
  int myints[] = {21,64,17,78,49};
  set<int> myset (myints,myints+5);

  set<int>::iterator rit;

  std::cout << "myset contains:";
  for (rit=myset.begin(); rit != myset.end(); ++rit)
    std::cout << ' ' << *rit;

  std::cout << '\n';

  return 0;
}