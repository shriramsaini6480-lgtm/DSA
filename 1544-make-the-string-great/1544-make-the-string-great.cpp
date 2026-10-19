class Solution {
public:
    string makeGood(string s) {
        stack<char> r;

        for (char ch : s) {
            if (!r.empty() &&
                (r.top() - ch == 32 || ch - r.top() == 32)) {
                r.pop();
            } else {
                r.push(ch);
            }
        }

        string result;
        while (!r.empty()) {
            result.push_back(r.top());
            r.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};