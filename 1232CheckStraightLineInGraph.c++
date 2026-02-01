#include <climits>
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        

        int dy = y2 - y1;
        int dx = x2 - x1;
        
        double m;
        if (dx == 0) {
                m = INT_MAX;
             }

        else { 
             m = static_cast<double>(dy) / dx;
        }

        cout << m;

        for (int i=1; i<coordinates.size() - 1; i++) {
             x1 = coordinates[i][0];
             y1 = coordinates[i][1];
             x2 = coordinates[i+1][0];
             y2 = coordinates[i+1][1];

            double m2;
             if ((x2-x1) == 0) {
                m2 = INT_MAX;
             }

            else {
             m2 = static_cast<double>(y2-y1) / (x2-x1);
             }

             cout << m2;

            if (m != m2) {
                return false;
            }
        }
        return true;
    }
};