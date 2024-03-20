#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool is_palindrome(char s[]) {
  int n = strlen(s); 
  for (int i = 0; i < n / 2; i++) { 
    if (s[i] != s[n - 1 - i]) {
      return false; 
    }
  }
  return true;
}


void solve(char s[]) {
  int n = strlen(s); 
  char original; 
  bool found = false; 
  for (int i = 0; i < n; i++) { 
    original = s[i]; 
    for (char c = 'a'; c <= 'z'; c++) { 
      if (c != original) { 
        s[i] = c; 
        if (is_palindrome(s)) { 
          found = true; 
          break; 
        }
      }
    }
    s[i] = original; 
    if (found) { 
      break; 
    }
  }
  if (found) { 
    printf("YES\n"); 
  } else { 
    printf("NO\n");
  }
}

int main() {
  int t; 
  scanf("%d", &t); 
  while (t--) { 
    char s[21]; 
    scanf("%s", s); 
    solve(s); 
  }
  return 0;
}
