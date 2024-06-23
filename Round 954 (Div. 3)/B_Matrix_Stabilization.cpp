#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

// const double pi = 2.0 * acos(0.0);

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        vector<vector<ll>> a(n, vector<ll>(m));
        vector<vector<ll>> ans(n, vector<ll>(m));

        // Read input array
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                ans[i][j] = a[i][j];
            }
        }

        // Process array
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                ll k = a[i][j];
                vector<ll> neighbors;

                if (i > 0) neighbors.push_back(a[i-1][j]);
                if (i < n-1) neighbors.push_back(a[i+1][j]);
                if (j > 0) neighbors.push_back(a[i][j-1]);
                if (j < m-1) neighbors.push_back(a[i][j+1]);

                if (!neighbors.empty() && all_of(neighbors.begin(), neighbors.end(), [&](ll val){ return k > val; })) {
                    ans[i][j] = *max_element(neighbors.begin(), neighbors.end());
                }
            }
        }

        // Printing the processed array
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
