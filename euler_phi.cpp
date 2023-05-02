//与えられた(N)に対してN以下の互いに素な数の個数を返す
 std::tuple<int, std::vector<int>> euler_phi(int n) {
    int count = 0;
    std::vector<int> coprime_numbers;
    for (int i = 1; i <= n; i++) {
        if (gcd(n, i) == 1) {
            count++;
            coprime_numbers.push_back(i);
        }
    }
    return std::make_tuple(count, coprime_numbers);
}

//使い方
int main() {
   int N = 10;
   tuple<int,vector<int> > euler = euler_phi(N);
   cout << get<0>(euler) << endl;
   for(auto x: get<1>(euler)){
        cout << x << " ";
   }
}