#include <iostream>
#include <fstream>
#define max 10
using namespace std;

int n, e, s, mT, KC[max], VT[max], nT, A[max][max] = {(0, 0)}, KeT[max] = {0};
int minKC() {

}

void Prim(int s) {
    int x, nT = 0;
    //thiet lap buoc khoi dau
    KC[s] = 0;
    while (nT <n)
    {
        x = minKC(); //tim dinh x co kc den cay khung nho nhat
        VT[x] = 0;   //loai x ra khoi tap hop VT
        for (int v = 0; v <= n; v++)
        {
            if (VT[v] && A[v][x] >0 && KC[v] > A[v][x])
            {
                KC[v] = A[v][x]; // cap nhat lai kc den cay khung
                KeT[v] = x; // danh dau ke v la dinh x
            }
        }
        mT += KC[x];
        nT++;
    }
    
}

int main() {

}