#include <stdio.h>

int main()
{
    int n;
    int ans = 1;
    printf("Enter a Number:- ");
    scanf("%d", &n);
    for (int m = 1; m <= n; m++)
    {
        ans = ans * m;
    }
    printf("Factorial of %d = %d", n, ans);
}
