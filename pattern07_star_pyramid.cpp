#include <iostream>
using namespace std;

// Pattern 7: Star Pyramid
// Prints a centered pyramid using stars

void pattern7(int n)
{
    for(int i = 0; i < n; i++)
    {
        // spaces
        for(int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }

        // stars
        for(int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    pattern7(n);

    return 0;
}
