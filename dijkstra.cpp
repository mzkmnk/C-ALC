// dijkstra(ノード数、隣接リスト、始点ノード)
vector<ll> dijkstra(ll n, unordered_map<ll, vector<pair<ll, ll>>> g, ll s) {
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q; // 優先度付きキュー
    vector<ll> dist(n, INF); // 始点からの最短距離
    dist[s] = 0; // 始点から始点への距離は0
    q.push(make_pair(dist[s], s));

    while (!q.empty()) {
        pair<ll, ll> p = q.top();
        q.pop();
        ll v = p.second;
        if (dist[v] < p.first) continue;
        for (auto e : g[v]) {
            if (dist[e.first] > dist[v] + e.second) {
                dist[e.first] = dist[v] + e.second;
                q.push(make_pair(dist[e.first], e.first));
            }
        }
    }

    return dist;
}
