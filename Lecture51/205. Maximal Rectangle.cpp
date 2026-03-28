int largestRectangleArea(vector<int>& heights) {
    stack<int> s;
    s.push(-1);
    int max_area = 0;
    for (int i = 0; i < heights.size(); ++i) {
        while (s.top() != -1 && heights[s.top()] >= heights[i]) {
            int height = heights[s.top()];
            s.pop();
            int width = i - s.top() - 1;
            max_area = max(max_area, height * width);
        }
        s.push(i);
    }
    while (s.top() != -1) {
        int height = heights[s.top()];
        s.pop();
        int width = heights.size() - s.top() - 1;
        max_area = max(max_area, height * width);
    }
    return max_area;
}

int maximalRectangle(vector<vector<char>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) {
        return 0;
    }
    int ans = 0;
    vector<int> hist(matrix[0].size(), 0);
    for (const auto& row : matrix) {
        for (int i = 0; i < row.size(); ++i) {
            hist[i] = (row[i] == '1') ? hist[i] + 1 : 0;
        }
        ans = max(ans, largestRectangleArea(hist));
    }
    return ans;
}