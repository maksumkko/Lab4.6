#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double P, S, si;
    int i, k;

    // 1
    S = 0;
    i = 1;
    while (i < 15)
    {
        P = 0;
        k = 1;
        while (k <= i)
        {
            si = (sin(10) * i) / (cos(10) * i); 
            P += si; 
            k++;
        }
        S += P / sqrt(k);
        i++;
    }
    cout << S << endl;

    // 2
    S = 0;
    i = 1;
    do
    {
        P = 0;
        k = 1;
        do
        {
            si = (sin(10) * i) / (cos(10) * i);  
            P += si;
            k++;
        } while (k <= i);
        S += P / sqrt(k); 
        i++;
    } while (i < 15);
    cout << S << endl;

    // 3
    S = 0;
    for (i = 1; i < 15; i++)
    {
        P = 0;
        for (k = 1; k <= i; k++)
        {
            si = (sin(10) * i) / (cos(10) * i); 
            P += si;
        }
        S += P / sqrt(k); 
    }
    cout << S << endl;

    // 4
    S = 0;
    for (i = 14; i >= 1; i--)
    {
        P = 0;
        for (k = 1; k <= i; k++)
        {
            si = (sin(10) * i) / (cos(10) * i);
            P += si;
        }
        S += P / sqrt(k);
    }
    cout << S << endl;

    return 0;
}
