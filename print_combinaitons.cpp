void print_combinations(const std::vector<int>& elements, int k) {
    std::vector<bool> bitmask(k, true);
    bitmask.resize(elements.size(), false);

    do {
        for (int i = 0; i < elements.size(); ++i) {
            if (bitmask[i]) {
                std::cout << elements[i] << ' ';
            }
        }
        std::cout << std::endl;
    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));
}