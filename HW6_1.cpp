#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
    int n;
    int mx = 0;
    int ix = 0;

    printf("enter the number of 'n'\n");
    scanf("%d", &n);

    int a[n], cnt[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
        cnt[i] = 1;

        for (int j = i - 1; j > -1; j--)
        {
            if (a[i] == a[j])
            {
                cnt[i] = cnt[j] + 1;
                break;
            }
        }
        if (mx < cnt[i])
        {
            mx = cnt[i];
            ix = i;
        }
    }
    printf("The mode of the array is the number %d.\n", a[ix]);
    printf("And it occurs at indices: \n");

    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[ix])
        {
            printf("%d ", i);
        }
    }

}