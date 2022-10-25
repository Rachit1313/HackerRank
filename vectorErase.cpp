#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> arr;
    int n,remove,removeStart,removeEnd;
    int temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> remove;    
    arr.erase(arr.begin() + (remove - 1));  
    cin >> removeStart >> removeEnd;
    arr.erase(arr.begin()+ (removeStart-1),arr.begin() + (removeEnd - 1));
    cout << arr.size() << endl;
    for(int i= 0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
