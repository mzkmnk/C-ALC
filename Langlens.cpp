std::vector<std::pair<char, int>> run_length_encoding(const std::string& s) {
    std::vector<std::pair<char, int>> encoded;
    for (const auto& c : s) {
        if (encoded.empty() || encoded.back().first != c) {
            encoded.emplace_back(c, 1);
        } else {
            ++encoded.back().second;
        }
    }
    return encoded;
}