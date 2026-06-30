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

bool czy_pierwsza(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
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
        cout << "2. Sprawdz czy to liczba pierwsza" << endl;
        cin >> wyjscie;
        if (wyjscie == 1) {
            cout << "Silnia z " << a << " wynosi: " << silnia(a) << endl;
        } else if (wyjscie == 2) {
            if (czy_pierwsza(a)) {
                cout << "Liczba " << a << " jest pierwsza." << endl;
            } else {
                cout << "Liczba " << a << " nie jest pierwsza." << endl;
            }
        }
    } while(wyjscie != 0);
    return 0;
}
