#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    int q;
    cin >> n >> q;

    int** a = new int*[n]();

    for (int i = 0; i < n; i++) {

        int k;
        cin >> k;
        int* i_arr = new int[k]();

        for (int j = 0; j < k; j++) {
            cin >> i_arr[j];
        }

        a[i] = i_arr;
    }

    for (int i = 0; i < q; i++) {
        int array_idx;
        int idx;
        cin >> array_idx  >> idx;
        int value = a[array_idx][idx];
        cout << value << endl;
    }

    return 0;
}