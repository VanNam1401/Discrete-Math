#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap vao n: ";
    cin >> n;
    cout << "Cac bo hoan vi la: " << endl;
    char arr[n];
    for (int i = 0; i <n; i++) {
        arr[i] = i + 65;
        cout << arr[i];
    }
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] > arr[i - 1]) {
            for (int j = n - 1; j >= i; j--) {
                if (arr[j] > arr[i - 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[i - 1];
                    arr[i - 1] = temp;
                    break;
                }
            }
            for (int j = n - 1; j > ((n - 1 + i)/2); j--) {
                int temp = arr[i + n - 1 - j];
                arr[i + n - 1 - j] = arr[j];
                arr[j] = temp;
            }
            cout << endl;
            for (int j = 0; j < n; j++) {
                cout << arr[j];
            }
            i = n;
        }
    }
    return 0;       
}
// hoán vị tiếp theo: hoán vị tên các bạn trong danh sách str= {B, C, Y,H} hoặc danh sách bất kì