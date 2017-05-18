#include <iostream>
#include <cstring>

using namespace std;

int fibonacci (int n);

int fib[10000];

int main()
{
    int n = 1;
    long long result = 0;
    memset(fib, 0, sizeof(int)*10000);

    while(1)
    {
        if(fibonacci(n) > 4000000)
            break;

        if(fib[n] %2 == 0)
            result += fib[n];
        n++;
    }

    cout << result << endl;
    return 0;
}

int fibonacci (int n)
{
    if(n <= 2)
    {
        fib[n] = 1;
        return 1;
    }
    else
    {
        if(fib[n] == 0)
        {
            fib[n] = fibonacci(n-1) + fibonacci(n-2);
            return fib[n];
        }
        else
            return fib[n];
    }
}
