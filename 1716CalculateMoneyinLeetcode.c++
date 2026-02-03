class Solution {
public:
    int totalMoney(int n) {
        int weeks = n/7;
        int days = n%7;
        int sum = 0;

        for (int i=0; i<weeks; i++) {
            sum += 28 + 7*i;
        }

        int start = weeks +1;

        for (int k = 0; k<days; k++) {
            sum += start +k;
        }

        return sum;
    }
};
