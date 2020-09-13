#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>  
#include <algorithm>
using namespace std;
int main()
{
    int z;
    scanf("%d", &z);
    for (int t = 0; t < z; t++)
    {
        long long a, b, x, y, n;
        scanf("%lld %lld %lld %lld %lld", &a, &b, &x, &y, &n);
        long long a_dec = min(n, a - x);
        long long n_left = n - a_dec;
        long long b_dec = min(n_left, b - y);
        long long min_a_result = (a - a_dec) * (b - b_dec);

        b_dec = min(n, b - y);
        n_left = n - b_dec;
        a_dec = min(n_left, a - x);
        long long min_b_result = (a - a_dec) * (b - b_dec);
        printf("%lld\n", min(min_a_result, min_b_result));
    }
    return 0;
}
