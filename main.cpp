#include <iostream>
#include <cmath>

using namespace std;

int euler(int n)
{
    int c, k, l;
    c = 1;
    for (int i = 2; i < n; i++)
    {
        k = n;
        l = i;
        do
        {
            if (k > l)
            {
                k = k - l;
            }
            if (k < l)
            {
                l = l - k;
            }
       }
        while (k != l);

        if (k == 1)
        {
            c++;
        }
    }
    return c;
}

int proper_fraction(int n)
{
    //  m/n, |m| < |n|
    int m = abs(n);

    if (m == 0)
        return 0;
    if (m == 1)
        return 1;

    return euler(m) * 2 + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << proper_fraction(n);
}
