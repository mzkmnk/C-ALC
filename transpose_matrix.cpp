vector<vector<string> > transposed(mazes.at(0).size(), vector<string>(mazes.size()));
for (int i = 0; i < mazes.size(); ++i) {
    for (int j = 0; j < mazes.at(0).size(); ++j) {
        transposed.at(j).at(i) = mazes.at(i).at(j);
    }
}