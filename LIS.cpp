ll lis_length(const vector<ll>& a) {
    ll n = a.size();
    ll INF = pow(10, 9);
    vector<ll> dp(n + 1, INF);
    dp[0] = -1;

    for (auto x : a) {
        auto idx = lower_bound(dp.begin(), dp.end(), x) - dp.begin();
        dp[idx] = min(dp[idx], x);
    }

    ll ans = 0;
    for (ll i = 1; i < n + 1; ++i) {
        if (dp[i] == INF) break;
        ans++;
    }

    return ans;
}