long long gcd_n(const std::vector<long long>& nums) {
    long long result = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        result = gcd(result, nums[i]);
    }
    return result;
}

long long lcm_n(const std::vector<long long>& nums) {
    long long result = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        result = lcm(result, nums[i]);
    }
    return result;
}

// 渡した配列の最大公約数、最小公倍数を求める
// Path: c-ALC/gcd_lcm.cpp
//渡した配列その物をいじるため注意