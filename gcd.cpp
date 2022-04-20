#include <bits/stdc++.h>
using namespace std;

// Greatest Common Divisor || Highest Common Factor (HCF)
int main()
{
    int a,b;
    cout << "Enter The two numbers a and b : ";
    cin >> a >> b;

    int c;
    c = max(a,b);

    int gcd = 0;

    for(int i=1; i<=c; i++)
    {
        if((a%i==0) && (b%i==0))
        {
            if(i>gcd)
            {
                gcd = i;
            }
        }
    }
    // gcd = __gcd(a,b);   // C++ gcd function!

    cout << "GCD or HCF of " << a << " and " << b << " is = " << gcd;
}
