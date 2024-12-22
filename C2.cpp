#include <iostream> 
using namespace std;
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n > 0)
    {
{
    for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            cout << i << " ";
        }
            }
            cout << endl;
        }
        else
        {
            cout << "Please entera positive integer." << endl;
        }
    return 0;
} 