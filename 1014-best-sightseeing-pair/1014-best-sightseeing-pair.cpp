class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();

        int maxVal=INT_MIN;

        int bestJ=values[0]+0;

        for(int i=1;i<n;i++){

            maxVal=max(maxVal,bestJ+values[i]-i);

            bestJ=max(bestJ,values[i]+i);

        }

        return maxVal;
    }
};