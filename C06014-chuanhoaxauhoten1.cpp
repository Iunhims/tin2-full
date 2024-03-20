#include <stdio.h>
#include <ctype.h>
#include <string.h>


void standardize(char *name) {
  
  int i = 0, j = strlen(name) - 1;
  while (name[i] == ' ') i++;
  while (name[j] == ' ') j--;
  name[j + 1] = '\0';

  if (i > 0) {
    for (int k = 0; k <= j - i + 1; k++) {
      name[k] = name[k + i];
    }
  }
  

  int len = strlen(name);
  int space = 0; 
  int pos = 0; 
  for (int k = 0; k < len; k++) {
    if (name[k] == ' ') {
      space++;
      if (space == 1) { 
        name[pos] = name[k];
        pos++;
      }
    } else {
      space = 0;
      if (k == 0 || name[k - 1] == ' ') { 
        name[pos] = toupper(name[k]); 
      } else {
        name[pos] = tolower(name[k]); 
      }
      pos++;
    }
  }
  name[pos] = '\0'; 
}

int main() {
  int n; 
  char name[81]; 
  scanf("%d\n", &n); 
  for (int i = 0; i < n; i++) {
    fgets(name, 81, stdin);
    standardize(name); 
    printf("%s\n", name); 
  }
  return 0;
}
