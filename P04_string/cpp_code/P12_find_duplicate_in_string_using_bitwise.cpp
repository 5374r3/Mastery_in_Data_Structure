#include <iostream>
int main() {
    char S[] = "finding";
    int H = 0, X = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        X = 1;
        X = X << (S[i] - 97);
        if ((X & H) > 0) { 
            std::cout<<S[i]<<" is duplicate"<<std::endl;
        } else {
            H = X | H;
        }
    }
    return 0;
}

// (X & H)          ->Masking:

// H = X | H        ->Merging:
