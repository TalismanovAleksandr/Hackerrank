#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    set<int> s;
    for(int i = 0; i < q; i++) {
        int y;//type
        int x;
        cin >> y >> x;
        if (y == 3) {
            if (s.find(x) == s.end()) {
                //not found
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        } else if( y == 2) {
            s.erase(x);
        } else {
            s.insert(x);
        }
    }
    return 0;
}