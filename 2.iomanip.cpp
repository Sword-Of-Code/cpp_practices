#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setiosflags(ios::left);
    cout.precision(5);
    cout << 123.456 << endl;
    cout.width(20);
    cout.fill('*');
    cout << 123.456 << endl;
    cout << setiosflags(ios::right);
    cout.width(20);
    cout.fill('*');
    cout << 123.456 << endl;

    
    cout << fixed << setprecision(3) << 123.45698797987 << endl;

    return 0;
}
