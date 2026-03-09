#include <iostream>
using namespace std;

// Pattern 4: Repeated Number Triangle
// Each row prints the row number repeatedly

void pattern4(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    pattern4(n);

    return 0;
}
