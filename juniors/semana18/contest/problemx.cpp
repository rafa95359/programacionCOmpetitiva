#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
map<string, Long> puntaje;
map<string, Long> clasificados;
map<Long, pair<string, string>> partidos;
Long k;
struct classcomp { bool operator() (const pair<Long,string>& lhs, const pair<Long,string>& rhs) const {
      if(lhs.first < rhs.first || (lhs.first == rhs.first && lhs.second>rhs.second))return false;
      return true;}
};
void verificarClasificados()
{
    multiset<pair<Long, string>,classcomp> r;
    for (auto x : puntaje)
    {
        pair<Long, string> aux;
        aux.first = x.second;
        aux.second = x.first;
        r.insert(aux);
    }
    Long i = 1;
    for (auto s : r)
    {
        clasificados[s.second]++;
        if (i == k)
            break;
        i++;
    }
}
void bt(Long m, Long k)
{
    if (m == k)
    {
        verificarClasificados();
    }
    for (Long i = k; i < m; i++)
    {
        pair<string, string> aux = partidos[i];
        //VICTORIA LOCAL
        puntaje[aux.first] += 3;
        bt(m, k + 1);
        puntaje[aux.first] -= 3;
        //VICTORIA VISISTANTE
        puntaje[aux.second] += 3;
        bt(m, k + 1);
        puntaje[aux.second] -= 3;
        //EMPATE
        puntaje[aux.first] += 1;
        puntaje[aux.second] += 1;
        bt(m, k + 1);
        puntaje[aux.first] -= 1;
        puntaje[aux.second] -= 1;
    }
}

int main()
{
    Long n, m, f;
    cin >> n >> m >> k >> f;
    vector<string> eq;
    for (Long i = 0; i < n; i++)
    {
        string equipo;
        Long punt;
        cin>>equipo>>punt;
        eq.push_back(equipo);
        puntaje[equipo] = punt;
        clasificados[equipo] = 0;
    }

    for (Long i = 0; i < m; i++)
    {
        string pri, sec;
        cin >> pri >> sec;
        pair<string, string> aux;
        aux.first = pri;
        aux.second = sec;
        partidos[i] = aux;
    }
    bt(m,0);
    Long factor=pow(3,m);
    for(Long i=0;i<n;i++){
        auto x=clasificados[eq[i]];
        Long resp=((x*f)/factor);
        cout<<eq[i]<<" : "<<resp<<endl;
    }
    return 0;
}