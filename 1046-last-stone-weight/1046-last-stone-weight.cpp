int lastStoneWeight(vector<int>& stones) {
    if (stones.size() == 1) return stones[0];
    while (stones.size() > 1) {
        sort(stones.rbegin(), stones.rend());
        if (stones[0] == stones[1]) {
            stones.erase(stones.begin(), stones.begin() + 2);
        } else {
            stones[0] = stones[0] - stones[1];
            stones.erase(stones.begin() + 1);
        }
    }
    return stones.size() ? stones[0] : 0;
}
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1) return stones[0];
        while (stones.size() > 1) {
            sort(stones.rbegin(), stones.rend());
            if (stones[0] == stones[1]) {
                stones.erase(stones.begin(), stones.begin() + 2);
            } else {
                stones[0] = stones[0] - stones[1];
                stones.erase(stones.begin() + 1);
            }
        }
        return stones.size() ? stones[0] : 0;
    }
};