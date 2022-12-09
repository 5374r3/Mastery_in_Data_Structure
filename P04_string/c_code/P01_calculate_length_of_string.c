#include<stdio.h>
int main(){
    // const char *s = "Mohan";
    char const *s = "Mohan";// both are correct
    int i;
    for(i=0;s[i]!='\0';i++)
    {};
    printf("length of string is %d\n",i);
    return 0;
}