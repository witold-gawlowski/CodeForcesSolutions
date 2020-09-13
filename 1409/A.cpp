#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>  
#include <algorithm>
using namespace std;
int main1409A()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", (abs(a - b) + 9) / 10);
    }
    return 0;
}
