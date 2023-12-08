#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int n, m, i, j;
  bool a = true;
  scanf("%d %d", &n, &m);

  char flag[n][m + 1];

  for (i = 0; i < n; ++i) {
    scanf("%s", flag[i]);
  }

  for (i = 0; i < n && a; ++i) {
    for (j = 1; j < m; ++j) {
      if (flag[i][j] != flag[i][0]) {
        a = false;
        break;
      }
    }
    if (i > 0 && flag[i][0] == flag[i - 1][0]) {
      a = false;
    }
  }

  printf("%s\n", a ? "YES" : "NO");

  return 0;
}
