#include <iostream>
#include <math.h>
#include <time.h>
#include <conio.h>
using namespace std;

int n = 2004;
long long population = 8000000000;
long tile = 0.02;
void tinhDS(int year)
{
    int delta = year - n;
    cout << n << "-" << year << "=" << delta << endl;
    double dsNam = pow(1 + tile, delta) * population;
    cout << "Dan so the gio sau: " << delta << "nam \n voi ti le tang: " << tile << "%";
    cout << "la: " << dsNam;
}
double dsDeQuy(int year)
{
    if (year == 0)
    {
        return population;
    }
    return (1 + tile) * dsDeQuy(year - 1);
}
int main()
{    
    int year;
    cin >> year;
    clock_t start_t, end_t, total_t;
    start_t = clock();
    tinhDS(year);
    end_t = clock();
    total_t = (double)(end_t - start_t) * 1000 / CLOCKS_PER_SEC;
    cout << total_t;
    start_t = clock();
    cout << dsDeQuy(year);
    end_t = clock();
    total_t = (double)(end_t - start_t) * 1000 / CLOCKS_PER_SEC;
    cout << total_t;
}