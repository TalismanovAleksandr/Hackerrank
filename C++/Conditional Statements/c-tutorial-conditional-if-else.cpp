#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    string result;
    if (n == 1) {
        result = "one";
    } else if (n == 2) {
        result = "two";
    } else if (n == 3) {
        result = "three";
    } else if (n == 4) {
        result = "four";
    } else if (n == 5) {
        result = "five";
    } else if (n == 6) {
        result = "six";
    } else if (n == 7) {
        result = "seven";
    } else if (n == 8) {
        result = "eight";
    } else if (n == 9) {
        result = "nine";
    } else {
        result = "Greater than 9";
    }
    cout << result << endl;
    // Write your code here

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
