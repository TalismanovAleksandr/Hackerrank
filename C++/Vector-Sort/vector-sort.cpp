#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        v.push_back(value);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        int value = v[i];
        cout << value << " ";
    }
    return 0;
}
