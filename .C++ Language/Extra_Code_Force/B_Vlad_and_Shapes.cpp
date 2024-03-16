#include <iostream>
#include <vector>
using namespace std;

bool isSquare(const vector<string>& grid) {
    int n = grid.size();
    int k = 0;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (char c : grid[i]) {
            if (c == '1') count++;
        }
        if (count > 0) {
            if (k == 0) k = count;
            if (count != k) return false; 
        }
    }
    return true;
}

bool isTriangle(const vector<string>& grid) {
    int n = grid.size();
    int k = 1;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == '1') count++;
        }
        if (count > 0) {
            if (count != k) return false; 
            k += 2; 
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> grid[i];
        }

        if (isSquare(grid)) {
            cout << "SQUARE" << endl;
        } else {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}
