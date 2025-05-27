#include <bits/stdc++.h>
using namespace std;

vector<int> g[100005], rg[100005], o;
int scc[100005], in[100005], out[100005], v, e, c;
bool vis[100005];

void dfs1(int u) {
    vis[u] = 1;
    for (int x : g[u]) if (!vis[x]) dfs1(x);
    o.push_back(u);
}

void dfs2(int u, int k) {
    scc[u] = k;
    for (int x : rg[u]) if (scc[x] == -1) dfs2(x, k);
}

int main() {
    cin >> v >> e;
    for (int i = 0, u, w; i < e; i++) {
        cin >> u >> w;
        g[u].push_back(w);
        rg[w].push_back(u);
    }

    for (int i = 1; i <= v; i++) if (!vis[i]) dfs1(i);
    memset(scc, -1, sizeof(scc));
    reverse(o.begin(), o.end());

    for (int x : o) if (scc[x] == -1) dfs2(x, c++);

    if (c == 1) return cout << "Yes", 0;

    set<pair<int, int>> s;
    for (int i = 1; i <= v; i++)
        for (int j : g[i]) 
            if (scc[i] != scc[j] && !s.count({scc[i], scc[j]})) 
                s.insert({scc[i], scc[j]}), out[scc[i]]++, in[scc[j]]++;

    cout << (count(in, in + c, 0) == 1 && count(out, out + c, 0) == 1 ? "Yes" : "No");
}
