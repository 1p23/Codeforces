#include <iostream>
#include <unordered_map>
#include <string>
 
int main() {
    int n;
    std::cin >> n;
 
    std::unordered_map<std::string, int> database;
    std::string name;
 
    for (int i = 0; i < n; ++i) {
        std::cin >> name;
        
        // If the name is not in the database, add it and print "OK"
        if (database.find(name) == database.end()) {
            database[name] = 0;
            std::cout << "OK" << std::endl;
        } 
        else {
            // If the name exists, increment the count and append it to the name
            ++database[name];
            std::cout << name << database[name] << std::endl;
        }
    }
 
    return 0;
}
