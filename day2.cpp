#include <iostream>
using namespace std;
int main()
{
    // for (int i = 1; i <= 100; i++)
    // {
    // cout << i << " ";
    // }


    // for (int i = 1; i <= 200; i++)
    // {
    //     if (i%2 == 1)
    //     {
    //         cout << i << " ";
    //     }
    // }


    int n, sum = 0;
    cout << "Enter a Number :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum is :" << sum << endl;
    

    return 0;
}