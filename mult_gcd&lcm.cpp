//複数の値に対してgcd,lcmを行う
//下記はgcdだが,lcmに変更できる。
ll solve(vector<ll> & A){
    ll ans = A[0];
    for(ll i = 1; i < A.size(); ++i){
        ans = gcd(ans,A[i]);
    }
    return ans;
}
