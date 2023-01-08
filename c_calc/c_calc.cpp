#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "‚ўҐ¤ЁвҐ зЁб«® 1: ";
    cin >> a;
    cout << "‚ўҐ¤ЁвҐ зЁб«® 2: ";
    cin >> b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << double(a) / double(b) << endl;
    cout << a << " & " << b << " = " << (a & b) << endl;
    cout << a << " | " << b << " = " << (a | b) << endl;
    cout << a << " ^ " << b << " = " << (a ^ b) << endl;

    return 0;
}
