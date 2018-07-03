#include <iostream>
using namespace std;

int main() {
    while(true) {
        int k;
        cin >> k;
        if (k != 0) {
            int n, m;
            cin >> n;
            cin >> m;
            for (int i = 0; i < k; i++) {
                int x, y;
                cin >> x;
                cin >> y;
                if (x == n || y == m) {
                    cout << "divisa" << '\n';
                } else if (x > n && y > m) {
                    cout << "NE" << '\n';
                } else if (x < n && y > m) {
                    cout << "NO" << '\n';
                } else if (x < n && y < m) {
                    cout << "SO" << '\n';
                } else {
                    cout << "SE" << '\n';
                }
            }
        } else {
            break;
        }
    }
    return 0;

}