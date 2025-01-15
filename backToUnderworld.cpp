#include "bits/stdc++.h"
using namespace std;

vector<int> adj[20001]; // Adjacency list
bool vis[20001];        // Visited array
int node_type[20001];   // Node type (0 = vampire, 1 = lykan)

// DFS function to calculate the size of two groups
pair<int, int> dfs(int u, int type) {
    vis[u] = true;
    node_type[u] = type;
    
    int vampire_count = (type == 0);
    int lykan_count = (type == 1);

    for (int v : adj[u]) {
        if (!vis[v]) {
            auto [vampires, lykans] = dfs(v, 1 - type);
            vampire_count += vampires;
            lykan_count += lykans;
        }
    }
    return {vampire_count, lykan_count};
}

// Clear all data structures before processing a new test case
void clear_all() {
    for (int i = 0; i < 20001; i++) {
        adj[i].clear();
    }
    memset(vis, false, sizeof(vis));
    memset(node_type, -1, sizeof(node_type));
}

int main() {
    int t, tc = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        clear_all();

        for (int i = 0; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int max_population = 0;

        for (int i = 1; i < 20001; i++) {
            if (!vis[i] && !adj[i].empty()) {
                auto [vampires, lykans] = dfs(i, 0);
                max_population += max(vampires, lykans);
            }
        }

        printf("Case %d: %d\n", tc++, max_population);
    }

    return 0;
}
