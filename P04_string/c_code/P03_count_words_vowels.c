#include <stdio.h>
int main() {
    char A[] = "How               are           you";
    int vowel_count = 0;
    int consonent_count = 0;
    int total_words = 0;
    for (int i = 0; A[i] != '\0'; i++) {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')
            vowel_count++;

        else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 95 && A[i] <= 122)) {
            consonent_count++;
        }
    }
    for (int i = 0; A[i] != '\0'; i++) {
        if ((A[i] == ' ') && (A[i - 1] != ' '))
            total_words++;
    }
    printf("total vowel is %d\n", vowel_count);
    printf("total consonent is %d\n", consonent_count);
    printf("total words is %d\n", total_words + 1);
    return 0;
}