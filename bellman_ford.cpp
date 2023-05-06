vector<ll> bellman_ford(ll n, unordered_map<ll, vector<pair<ll, ll>>> adj, ll s) {
    vector<ll> dist(n, INF);
    dist[s] = 0;

    for (ll i = 0; i < n - 1; i++) {
        for (const auto& from_edges : adj) {
            ll from = from_edges.first;
            for (const auto& edge : from_edges.second) {
                ll to = edge.first;
                ll cost = edge.second;
                if (dist[from] != INF && dist[to] > dist[from] + cost) {
                    dist[to] = dist[from] + cost;
                }
            }
        }
    }

    // 負の閉路がある場合は空のベクターを返す
    for (const auto& from_edges : adj) {
        ll from = from_edges.first;
        for (const auto& edge : from_edges.second) {
            ll to = edge.first;
            ll cost = edge.second;
            if (dist[from] != INF && dist[to] > dist[from] + cost) {
                return vector<ll>();
            }
        }
    }

    return dist;
}
