class Solution {
private:
    vector<int> prefix_sums;
    int total_sum;
    
public:
    Solution(vector<int>& w) {
        int current_sum = 0;
        for (int weight : w) {
            current_sum += weight;
            prefix_sums.push_back(current_sum);
        }
        total_sum = current_sum;
    }
    
    int pickIndex() {
        int target = rand() % total_sum + 1;
        
        return lower_bound(prefix_sums.begin(), prefix_sums.end(), target) - prefix_sums.begin();
    }
};