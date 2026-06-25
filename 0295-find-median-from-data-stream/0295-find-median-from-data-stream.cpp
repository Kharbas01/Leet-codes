class MedianFinder {
public:
    multiset<int> left, right;

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if (left.empty()) {
            left.insert(num);
        } else if (num < *left.rbegin()) {
            left.insert(num);
        } else {
            right.insert(num);
        }
        
        // balance the two heaps
        if (left.size() > right.size() + 1) {
            right.insert(*left.rbegin());
            left.erase(left.find(*left.rbegin()));
        } else if (right.size() > left.size()) {
            left.insert(*right.begin());
            right.erase(right.find(*right.begin()));
        }
    }
    
    double findMedian() {
        if (left.size() == right.size()) {
            return (*left.rbegin() + *right.begin()) / 2.0;
        } else {
            return *left.rbegin();
        }
    }
};