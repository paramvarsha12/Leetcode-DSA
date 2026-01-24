#include <utility>
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mad = arr[1]-arr[0];

        vector<vector<int>> arr2;


        for (int i=1; i< arr.size()-1; i++) {
            if (arr[i+1] - arr[i] < mad) {
                mad = arr[i+1] - arr[i];
            }

        }

        
        for (int i=0; i < arr.size()-1; i++) {
            if (arr[i+1] - arr[i] == mad) {
                arr2.push_back({arr[i], arr[i+1]});

            }
            
        }


        cout << mad;
        return arr2;

        
        
    }
};