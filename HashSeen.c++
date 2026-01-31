#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {3, 5, 7, 9};
    int n = 4;

    unordered_map<int, bool> seen;

    for (int i = 0; i < n; i++) {
        seen[arr[i]] = true;
    }

    if (seen[7] == true) {
        cout << "Found";
    } else {
        cout << "Not Found";
    }

    return 0;
}