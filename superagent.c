#include <stdio.h>

int main(void) {
    char keypad[3][4]; 
    int i, a = 1; 

    for (i = 0; i < 3; ++i) {
        scanf("%s", keypad[i]);
    }


    if ((keypad[0][0] != keypad[2][2]) || 
        (keypad[0][1] != keypad[2][1]) ||
        (keypad[0][2] != keypad[2][0]) ||
        (keypad[1][0] != keypad[1][2])) {
        a = 0;
    }

   
    printf("%s\n", a ? "YES" : "NO");

    return 0;
}
