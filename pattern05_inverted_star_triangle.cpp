#include <iostream>
using namespace std;

// Pattern 5: Inverted Star Triangle
// Each row prints decreasing number of stars

void pattern5(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
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

    pattern5(n);

    return 0;
}
