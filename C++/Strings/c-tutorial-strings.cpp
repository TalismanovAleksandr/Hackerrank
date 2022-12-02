#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    cin >> a >> b;
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    string temp = a;
    a[0] = b[0];
    b[0] = temp[0];
    cout << a << " " << b << endl;
    return 0;
}