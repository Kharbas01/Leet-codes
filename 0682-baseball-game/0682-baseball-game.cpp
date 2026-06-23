class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        for (const string& operation : operations) {
            if (operation == "C") {
                scores.pop_back();
            } else if (operation == "D") {
                scores.push_back(2 * scores.back());
            } else if (operation == "+") {
                scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]);
            } else {
                scores.push_back(stoi(operation));
            }
        }
        int sum = 0;
        for (int score : scores) {
            sum += score;
        }
        return sum;
    }
};