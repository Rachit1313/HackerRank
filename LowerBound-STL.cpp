#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n, temp, q, query;
    cin >> n;
    vector<long> v;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        v.push_back(temp);
    }

    cin >> q;

    for (int i = 0; i < q; ++i) {
        cin >> query;
        auto itr = lower_bound(v.begin(), v.end(), query);
        if (query != *itr) {
            cout << "No " << (itr - v.begin() + 1) << endl;
        }
        else {
            cout << "Yes " << (itr - v.begin() + 1) << endl;
        }
    }
    return 0;
}
