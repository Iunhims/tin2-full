#include<stdio.h>
#include<math.h>
int main () {
    int a;
    int EvenNumber=0;
    int OddNumber=0;
    scanf ("%d", &a);
    while (a>0) {
        int b=a%10;
            a=a/10;
        if (b%2!=0) {
            EvenNumber++;
        } else {
            OddNumber++;
        }
    }
    printf("%d %d", EvenNumber, OddNumber);
    return 0;
}

