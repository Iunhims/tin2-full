#include<stdio.h>

int main() {
	char str[100];
	int so = 0, chu = 0, kitu = 0, i;
	fgets(str, 100, stdin);
	for (i = 0; str[i]; i++) {
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
			chu++;
		}
		else if(str[i] >= '0' && str[i] <= '9') {
			so++;
		}
		else {
			kitu++;
		}
	}
	printf("%d %d %d", chu, so, kitu - 1);
	return 0;
}

