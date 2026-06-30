#include <iostream>

using namespace std;

long long silnia(int n) {
    if (n < 0) return 0;
    long long wynik = 1;
    for (int i = 1; i <= n; ++i) {
        wynik *= i;
    }
    return wynik;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Oblicz silnie" << endl;
        cin >> wyjscie;
        if (wyjscie == 1) {
            cout << "Silnia z " << a << " wynosi: " << silnia(a) << endl;
        }
    } while(wyjscie != 0);
    return 0;
}
