class Solution {
    public: int maxScore(vector < int > & cardPoints, int k) {
        int x = cardPoints.size() - k;
        int s = 0;
        for (int i = 0; i < x; i++) {
            s += cardPoints[i];
        }

        int sum = s;
        for (int i = 0; i < cardPoints.size(); i++) {
            s -= cardPoints[i];
            if (i + x >= cardPoints.size()) {
                break;
            }
            s += cardPoints[i + x];
            sum = min(sum, s);
        }

        int totalSum = 0;
        for (int p: cardPoints) {
            totalSum += p;
        }

        return totalSum - sum;
    }
};