#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void testIfStream()
{
    ifstream fin;
    fin.open("test.dat", ios::out | ios::app);
    if (!fin) {
        cout << "files fail to open, state = " << fin.rdstate() << endl;
    } else {
        string str;
        while (!fin.rdstate()) {
            getline(fin, str);
            cout << str << endl;
        }

        fin.close();
    }
}

void testOfStream(string txt)
{
    ofstream fout;
    fout.open("test.dat", ios::out | ios::app);
    if (!fout) {
        cout << "files fail to open" << endl;
    } else {
        fout << txt;
        fout.close();
    }
}

int main()
{
    /*
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

    
    cout << "reserve 3 decimals: " << fixed << setprecision(3) << 123.45698797987 << endl;
    */

    // fstream
    testOfStream("123");
    testOfStream("456");
    testOfStream("789");
    testIfStream();

    return 0;
}
