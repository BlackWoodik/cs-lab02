#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B:";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
    if (a > b)
        cout << "Max is A = " << a;
    else
        cout << "Max is B = " << b;
    if (a < b)
        cout << "Min is A = " << a;
    else
        cout << "Min is B = " << b;
    return 0;
}
