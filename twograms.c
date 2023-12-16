#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    char s[101];
    scanf("%s", s);
 
    int maxCount = 0;
    char result[3] = {s[0], s[1], 0}; // Initialize with the first two-gram
 
    for (int i = 0; i < n - 1; i++) {
        int count = 0;
        for (int j = i + 1; j < n - 1; j++) {
            if (s[i] == s[j] && s[i + 1] == s[j + 1]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            result[0] = s[i];
            result[1] = s[i + 1];
        }
    }
 
    printf("%s\n", result);
    return 0;
}
