std::vector<std::vector<int>> combinations(const std::vector<int>& elements, int k) {
    std::vector<bool> bitmask(k, true);
    bitmask.resize(elements.size(), false);
    std::vector<std::vector<int>> result;

    do {
        std::vector<int> combination;
        for (int i = 0; i < elements.size(); ++i) {
            if (bitmask[i]) {
                combination.push_back(elements[i]);
            }
        }
        result.push_back(combination);
    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));

    return result;
}
