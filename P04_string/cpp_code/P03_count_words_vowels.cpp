#include <iostream>
using namespace std;
int main() {
    char A[] = "How   are  you";
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
        if (A[i] == ' ' && A[i-1]!=' ')
            total_words++;
    }
    cout << "total vowel is " << vowel_count << endl;
    cout << "total consonent is " << consonent_count << endl;
    cout << "total words is " << total_words + 1 << endl;
    return 0;
}