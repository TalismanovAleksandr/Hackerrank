#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    int b;
    string result;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i == 1) {
            result = "one";
        } else if (i == 2) {
            result = "two";
        } else if (i == 3) {
            result = "three";
        } else if (i == 4) {
            result = "four";
        } else if (i == 5) {
            result = "five";
        } else if (i == 6) {
            result = "six";
        } else if (i == 7) {
            result = "seven";
        } else if (i == 8) {
            result = "eight";
        } else if (i == 9) {
            result = "nine";
        } else if (i % 2 == 0) {
            result = "even";
        } else if (i % 2 == 1) {
            result = "odd";
        }
        cout << result << endl;
    }
    return 0;
}