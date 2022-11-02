#include<stdio.h>

double e_without_recursion1(int x,int n) {
        double sum = 1;
    for(int i = n-1;i>0;i--) {
        sum = 1+x*sum/i;
    }
    return sum;
}

double e_without_recursion(int x,int n) {
        double sum = 1;
    for(;n>0;n--) {
        sum = 1+x*sum/n;
    }
    return sum;
}

double e(int x,int n) {
    static double p = 1,f=1;
    double r;
    if(n==0)
        return 1;
    else
        r = e(x,n-1);
        p = p*x;
        f = f*n;
    return r+p/f;
        
}
int main() {
    int x,n;
    double result = e(1,10); //1e = 2.718282
    // e^1 and 10 is number of terms
    printf("%lf\n",result);

    double result1 = e_without_recursion(1,10); //1e = 2.718282
    // e^1 and 10 is number of terms
    printf("%lf\n",result1);

    double result2 = e_without_recursion1(1,10); //1e = 2.718282
    // e^1 and 10 is number of terms
    printf("%lf\n",result2);
}

// e^x = 1 + x/1 + x^2/2! + x^3/3! +  x^4/4! + x^5/5! + .......n times