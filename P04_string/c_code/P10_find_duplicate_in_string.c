// #include <stdio.h>
// #include<string.h>
// int main() {
//     char s[] = "mohiinkknoo";
//     int count1 = 0;

//     printf("%d\n", count1);
//     for (int i = 0; i < count1 - 1; i++) {
//         int count = 1;
//         if (s[i] != -1)
//             for (int j = i + 1; s[j] != '\0'; j++) {
//                 if (s[i] == s[j]) {
//                     count++;
//                     s[j] = -1;
//                 }
//             }
//         if (count > 1)
//             printf("%c appaers %d times\n", s[i], count);
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s[] = "mohiinkknoo";
//     int x = strlen(s);
//     printf("%d\n", x);
//     for (size_t i = 0; i < strlen(s); i++) {
//         int count = 1;
//         if (s[i] != -1)
//             for (int j = i + 1; s[j] != '\0'; j++) {
//                 if (s[i] == s[j]) {
//                     count++;
//                     s[j] = -1;
//                 }
//             }
//         if (count > 1)
//             printf("%c appears %d times\n", s[i], count);
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    char s[] = "mohiinkknoo";
    int len;
    for(len = 0; s[len]; len++);
    // printf("%d\n",len);
    for (int i = 0; i < len; i++) {
        int count = 1;
        if(s[i] != -1)
        for (int j = i + 1; s[j] != '\0'; j++) {
            if (s[i] == s[j]) {
                count++;
                s[j] = -1;
            }
        }
        if (count > 1)
            printf("%c appears %d times\n", s[i], count);
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     char s[] = "mohiinkknoo";
//     size_t len;
//     for(len = 0; s[len]; len++);
//     for (size_t i = 0; i < len; i++) {
//         int count = 1;
//         if(s[i] != -1)
//         for (int j = i + 1; s[j] != '\0'; j++) {
//             if (s[i] == s[j]) {
//                 count++;
//                 s[j] = -1;
//             }
//         }
//         if (count > 1)
//             printf("%c appears %d times\n", s[i], count);
//     }
//     return 0;
// }
