#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
long long maxProductAfterIncrement(int n, vector<int>& digits) {
    // Find the first occurrence of the smallest digit
    int min_digit = *min_element(digits.begin(), digits.end());
    auto min_pos = find(digits.begin(), digits.end(), min_digit);
    
    // Increment that digit by 1
    *min_pos += 1;
 
    // Calculate the product of all digits
    long long product = 1;
    for (int digit : digits) {
        product *= digit;
    }
 
    return product;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> digits(n);
        for (int i = 0; i < n; i++) {
            cin >> digits[i];
        }
 
        cout << maxProductAfterIncrement(n, digits) << endl;
    }
 
    return 0;
}
