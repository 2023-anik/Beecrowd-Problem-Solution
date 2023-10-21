#include<bits/stdc++.h>
using namespace std;

int main()
{
    double taka;
    cin >> taka;
    int i = 0;
    double notes[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    cout << "NOTAS:" << endl;
    while (i < 6)
    {
        int count = taka / notes[i];
        cout << count << " nota(s) de R$ " << fixed << setprecision(2) << notes[i] << endl;
        //taka -= count * notes[i];
        taka = fmod(taka, notes[i]);
        i++;
    }
    taka *= 100;
    cout << "MOEDAS:" << endl;
    while (i <= 11)
    {
        int count = taka / (notes[i]*100);
        cout << count << " moeda(s) de R$ " << fixed << setprecision(2) << notes[i] << endl;
        //taka -= count * notes[i]*100;
        taka = fmod(taka, notes[i]*100);
        i++;
    }
    return 0;
}
