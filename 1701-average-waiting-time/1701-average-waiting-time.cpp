class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        long long total = 0;
        long long time = 0;

        for (int i = 0; i < c.size(); i++) {
            int arrival = c[i][0];
            int cooking = c[i][1];

            time = max(time, (long long)arrival);
            time += cooking;

            total += time - arrival;
        }

        return (double)total / c.size();
    }
};