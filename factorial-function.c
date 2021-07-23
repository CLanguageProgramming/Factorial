#include <stdio.h>

int Factorial();

int main()
{
    int n;
    int ans = 1;
    printf("Enter a Number:- ");
    scanf("%d", &n);
    ans = Factorial(n);
    printf("Factorial of %d = %d", n, ans);
}

int Factorial(int n)
{
    int ans = 1;
    for (int m = n; m >= 1; m--)
    {
        ans = ans * m;
    }
    return ans;
}
