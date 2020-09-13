#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>  
#include <algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int z = 0; z < t; z++)
    {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int dif = y - x;
        for (int i = 1; i <= 50; i++)
        {
            if (dif % i == 0)
            {
                int inside_elems = dif / i + 1;
                if (inside_elems > n)
                {
                    continue;
                }
                int left_elems = n - inside_elems;
                int max_lower_elems = x / i - 1;
                int left_upper_elems = left_elems - max_lower_elems;
                int starting_elem, c;
                for (starting_elem = x, c = 0; starting_elem - i >= 1 && c < left_elems; starting_elem-=i, c++){}
                c = 0;
                while (c < n)
                {
                    printf("%d ", starting_elem);
                    starting_elem += i;
                    c++;
                }
                printf("\n");
                break;
            }
        }
    }

    return 0;
}
