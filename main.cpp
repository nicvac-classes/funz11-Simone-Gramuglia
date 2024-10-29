#include <iostream>
#include <ctime>

using namespace std;

double previsioneB(double b) {
    double perc, ranPerc;
    int x;

    x = rand() % 21;
    ranPerc = b / 100 * x;
    perc = b + b / ranPerc;
    
    return perc;
}

double raccoltaF(double b) {
    double imp;

    imp = rand() % 101;
    b = b + imp;
    
    return b;
}

double spesaI(double b) {
    double imp;

    imp = rand() % 101;
    b = b - imp;
    if (b < 0) {
        b = 0;
        cout << "Hai finito tutto il budget!" << endl;
    }
    
    return b;
}

int main() {
    double b, res, perc;
    string a;

    cout << "Inserisci budget iniziale:" << endl;
    cin >> b;
    do {
        cout << "R (raccolta fondi) P (previsione del budget) S (spesa imprevista) X (uscire dal programma" << endl;
        cin >> a;
        if (a == "R") {
            b = raccoltaF(b);
            cout << "Dopo la raccolta fondi il budget ammonta a: " << b << endl;
        } else {
            if (a == "P") {
                perc = previsioneB(b);
                cout << "Seconodo i miei calcoli il budget del prossimo mese sarà di: " << perc << endl;
            } else {
                if (a == "S") {
                    b = spesaI(b);
                    cout << "Dopo la spesa imprevista il budget ammonta a: " << b << endl;
                }
            }
        }
    } while (a != "X");
    cout << "Algoritmo chiuso" << endl;
}