#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n, m, ai, bi;
    long long max_matches = 0;

    cin >> n >> m;
    vector<pair<long long,long long>> matchboxes;

    for(int i = 0; i < m; ++i) {
        cin >> ai >> bi;
       matchboxes.emplace_back(bi, ai); 
    }

    sort(matchboxes.rbegin(), matchboxes.rend());

    for(const auto &matchbox : matchboxes) {
        int boxes_taken =min(n, matchbox.second);
        max_matches += (long long) boxes_taken * matchbox.first;
        n -= boxes_taken;
        if(n == 0) break;
    }

    std::cout << max_matches << std::endl;

    return 0;
}
