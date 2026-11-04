#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

void laskeSumma(int a, int b)
{
    cout << "Summa: " << a + b << endl;
}

void laskeJako(int a, int b)
{
    if (b == 0)
        throw runtime_error("Jakaja ei saa olla nolla");

    cout << "Osamaara: " << float(a) / b << endl;
}

int palautaSumma(int a, int b)
{
    return a + b;
}

float palautaJako(int a, int b)
{
    if (b == 0)
        throw runtime_error("Jakaja ei saa olla nolla");

    return float(a) / b;
}

int main()
{
    int luku1, luku2;

    cout << "Anna ensimmainen luku: ";
    cin >> luku1;
    cout << "Anna toinen luku: ";
    cin >> luku2;

    cout << fixed << setprecision(2);

    try {
        laskeSumma(luku1, luku2);
        laskeJako(luku1, luku2);
        cout << "Palautettu summa on: " << palautaSumma(luku1, luku2) << endl;
        cout << "Palautettu osamaara on: " << palautaJako(luku1, luku2) << endl;
    }
    catch (const runtime_error &virhe) {
        cout << "Error: " << virhe.what() << endl;
    }

    return 0;
}