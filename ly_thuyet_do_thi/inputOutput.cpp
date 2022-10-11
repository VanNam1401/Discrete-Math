#include <iostream>
#include <queue>
using namespace std;

int n, e, A[20][20], daxet[20] = {0}, Truoc[20] = {0}; // Truoc: truy duong da di qua
queue<int> Queue;
void nhapDothi(int A[][20], int &n, int &e)
{
    cout << "Nhap so dinh cua do thi: ";
    cin >> n;
    cout << "Nhap so canh cua do thi: ";
    cin >> e;
    for (int i = 1; i <= e; i++)
    {
        int d, c;
        cin >> d >> c;
        A[d][c] = A[c][d] = 1;
    }
}
// in do thi
void inDothi(int A[][20], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
// deep first search
void DFS(int v)
{
    daxet[v] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (A[v][i] && !daxet[i])
        {
            Truoc[i] = v;
            DFS(i);
        }
    }
}
// truoc[0, 1, 2, 2, 4]
// tu 1 (s)  đến 5(f)
//(1, 4) --> 5
//  (1, 2) --> 4
//  (1, 1) --> 2 --> 4 --> 5
void duongdi(int s, int f)
{
    if (s == f)
    {
        cout << s;
    }
    else
    {
        duongdi(s, Truoc[f]);
        cout << "--> " << f;
    }
}

// truoc: 0 1 2 2 1
void BFS(int v)
{
    Queue.push(v);
    daxet[v] = 1;
    while (!Queue.empty())
    {
        int f = Queue.front();
        Queue.pop();
        for (int i = 1; i <= n; i++)
        {
            if (A[f][i] && !daxet[i])
            {
                Queue.push(i);
                daxet[i] = 1;
                Truoc[i] = f;
            }
        }
    }
}

int main()
{
    nhapDothi(A, n, e);
    inDothi(A, n);
    cout << endl;
    // DFS(1);// 1 là đỉnh bắt đầu
    // cout << endl;
    // duongdi(1, 5);
    BFS(1); // 1 là đỉnh bắt đầu
    int tplt = 0;
    duongdi(1, 5);
    for (int i = 1; i <= n; i++)
    {
        if (!daxet[i])
        {
            DFS(i);
            tplt++;
        }
    }
    cout << "so tplt cua do thi la: " << tplt;
    // BFS(1)
    for (int i = 2; i <= n; i++)
    {
        duongdi(1, i);
        cout << endl;
    }
}