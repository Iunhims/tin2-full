#include <stdio.h>
#include <string.h>


int equal(char *s1, char *s2) {
  return strcmp(s1, s2) == 0;
}

void create_S12(char *S1, char *S2, char *S12) {
  int i, j, k;
  i = j = k = 0;
  while (i < strlen(S1) && j < strlen(S2)) {
    S12[k++] = S2[j++];
    S12[k++] = S1[i++];
  }
  S12[k] = '\0';
}


void split_S12(char *S12, char *S1, char *S2) {
  int i, j, k;
  i = j = k = 0;
  while (i < strlen(S12) / 2) {
    S1[i++] = S12[j++];
  }
  S1[i] = '\0';
  while (j < strlen(S12)) {
    S2[k++] = S12[j++];
  }
  S2[k] = '\0';
}


int find_steps(char *S1, char *S2, char *S) {
  int steps = 0;
  char S12[401];
  while (steps < 200) {
    create_S12(S1, S2, S12);
    steps++;
    if (equal(S12, S)) {
      return steps;
    }
    split_S12(S12, S1, S2);
  }
  return -1;
}

int main() {
  int N;
  char S1[201], S2[201], S[401];
  while (1) {
    scanf("%d", &N);
    if (N == 0) {
      break;
    }
    scanf("%s", S1);
    scanf("%s", S2);
    scanf("%s", S);
    printf("%d\n", find_steps(S1, S2, S));
  }
  return 0;
}
