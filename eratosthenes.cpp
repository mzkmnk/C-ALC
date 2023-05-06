vector<int> sieve_of_eratosthenes(int N) {
    vector<bool> num(N+1,false);num[0] = true,num[1] = true;
    vector<int> primes;
    for(int i = 2; i < N+1; ++i){
        if(num[i]) continue;
        primes.push_back(i);
        for(int j = 2; i*j <= N; ++j) num[i*j] = true;
    }
    return primes;
}