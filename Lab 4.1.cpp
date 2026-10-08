
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, i;
    double P;

    cout << "Enter N (1..16): ";
    cin >> N;

    if (N < 1 || N > 16)
    {
        cout << "Invalid N!" << endl;
        return 0;
    }

    // 1. while
    P = 1;
    i = N;
    while (i <= 16)
    {
        P *= (double)(i * N) / (i * i + N * N);
        i++;
    }
    cout << setprecision(12);
    cout << "while: " << P << endl;

    // 2. do...while
    P = 1;
    i = N;
    do
    {
        P *= (double)(i * N) / (i * i + N * N);
        i++;
    } while (i <= 16);
    cout << "do while: " << P << endl;

    // 3. for (increasing)
    P = 1;
    for (i = N; i <= 16; i++)
    {
        P *= (double)(i * N) / (i * i + N * N);
    }
    cout << "for ++: " << P << endl;

    // 4. for (decreasing)
    P = 1;
    for (i = 16; i >= N; i--)
    {
        P *= (double)(i * N) / (i * i + N * N);
    }
    cout << "for --: " << P << endl;

    return 0;
}
