#include <stdio.h>
 
int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        char word[3];
        scanf("%s", word);
        int first = word[0] - 'a';
        int second = word[1] - 'a';
        n = first * 25 + second + 1 - (second > first ? 1 : 0);
        printf("%d\n", n);
    }
    return 0;
}
