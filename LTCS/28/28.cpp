#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point() {}
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    // friend ostream &operator<<(ostream &os, const Point p)
    // {
    //     os << "x: " << p.x << ", y: " << p.y;
    //     return os;
    // }

    void equals(Point p, ofstream &fileout)
    {
        if (p.y == this->y && p.x != this->x)
        {
            fileout << this->x << " " << this->y << "\n"
                    << p.x << " " << p.y << "\n"
                    << "---------\n";
        }
    }
};

int main()
{

    ifstream fileIn("Diem.in.txt", ios_base::in);
    ofstream fileOut("Diem.out.txt", ios_base::out);

    if (fileIn.is_open())
    {
        cout << "Thanh cong" << endl;
        Point point[100];
        int n = 0;
        int x;
        int y;
        while (1)
        {
            fileIn >> x >> y;

            Point p(x, y);
            point[n++] = p;
            // dừng vòng lặp và trả về true khi con trỏ trỏ tới cúi file
            if (fileIn.eof())
            {
                break;
            }
        }
        cout << n << " " << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << point[i] << endl;
        // }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                point[i].equals(point[j], fileOut);
            }
        }
    }
    else
    {
        cout << "Khong thanh cong" << endl;
    }
    return 0;
}