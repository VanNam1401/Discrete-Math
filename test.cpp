#include <iostream>
using namespace std;
struct sinhVien
{
    int msv;
    char hoten[50], xl;
    float cc, gk, ck, tk;
};
typedef sinhVien sv;
struct node
{
    sv data;
    node *n, *p;
};
typedef node *list;
int insert_f(sv x, list &f, list &l)
{
    list a = new (node);
    a->data = x;
    a->n = a->p = NULL;
    if (f == NULL)
    {
        f = l = a;
    }
    else
    {
        a->n = f;
        f->p = a;
        f = a;
    }
}
char xeploai(float q)
{
    if (q >= 8.5 && q <= 10)
    {
        return 'A';
    }
    else if (q >= 8.5 && q <= 10)
    {
        return 'B';
    }
    else if (q >= 8.5 && q <= 10)
    {
        return 'C';
    }
    else if (q >= 8.5 && q <= 10)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}
void xuat(list f, list l)
{
    list q = f;
    while (q)
    {
        cout << q->data.msv << "\t" << q->data.hoten << "\t" << q->data.tk << "\t" << q->data.xl;
        q = q->n;
    }
}
void menu(list &f, list &l)
{
    sv a;
    f = l = NULL;
    while (1)
    {
        cout << "\n----------MENU----------";
        cout << "\n1. Them 1 sv vao dau ds.";
        cout << "\n2. Them 1 sv vao cuoi danh sach.";
        cout << "\n3. Xoa 1 sv o dau ds.";
        cout << "\n4. Xoa 1 sv o cuoi ds.";
        cout << "\n5. Dem xem trong ds co bao nhieu sv.";
        cout << "\n6. nhap msv, tim sv do.";
        cout << "\n7. In ra ds sv tu dau den cuoi.";
        cout << "\n8. In ra ds sv tu cuoi ve dau.";
        cout << "\n9. thoat.";
        cout << "\n Chon chuong trinh(1-9): ";
        int z;
        cin >> z;
        if (z == 1)
        {
            cout << "\nnhap msv: ";
            fflush(stdin);
            cin >> a.msv;
            cout << "\nnhap ho ten sv: ";
            fflush(stdin);
            cin.getline(a.hoten, 50);
            cout << "\nnhap diem cc, gk, ck: ";
            fflush(stdin);
            cin >> a.cc >> a.gk >> a.ck;
            while (1)
            {
                if (a.cc > 10 || a.cc < 0 || a.ck > 10 || a.ck < 0 || a.gk > 10 || a.gk < 0)
                {
                    cout << "\nnhap sai, nhap lai.";
                }
                else
                {
                    a.tk = 0.1 * a.cc + 0.3 * a.gk + 0.6 * a.ck;
                    break;
                }
            }
            a.xl = xeploai(a.tk);
        }
        else if (z == 7)
        {
            xuat(f, l);
        }
    }
}

main()
{
    list f, l;
    menu(f, l);
}