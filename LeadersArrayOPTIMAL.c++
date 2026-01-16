int leadersinarray (vector<int> &arr) {
    int n = arr.size();
    int maxi = INT_MIN;

    vector<int> leaders;

    for (int i = n-1; i>=0; i--) {
        if (arr[i] > maxi) {
            leaders.push_back(arr[i]);
            maxi = arr[i];
        }
    }

    sort(leaders.begin(), leaders.end());
    return leaders;
}