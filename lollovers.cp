#include <iostream>
#include <string>

int main() {
    int n;
    std::string items;
    std::cin >> n >> items;

   
    int loaves = 0, onions = 0;

    
    for (char item : items) {
        if (item == 'L') ++loaves;
        if (item == 'O') ++onions;
    }

    // Traverse the items and try to find a valid division
    int myLoaves = 0, myOnions = 0;
    for (int k = 1; k < n; ++k) {
        if (items[k - 1] == 'L') myLoaves++;
        else myOnions++;

        // Check if the current division satisfies the conditions
        if ((myLoaves != loaves - myLoaves && myOnions != onions - myOnions) || 
            (k == 1 && myLoaves != loaves) || 
            (k == 1 && myOnions != onions)) {
            // Print the number of items taken and then exit
            std::cout << k << std::endl;
            return 0;
        }
    }

    // If no division could be found, print -1
    std::cout << -1 << std::endl;
    return 0;
}
