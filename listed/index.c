#include <stdio.h>
#include <conio.h>
int main()
{
    // nhap vao n
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);

    printf("\n Cac bo hoan vi la:\n");

    // khoi tao arr gom n phan tu
    char arr[n];

    // gan gia tri cho cac phan tu cua arr va in ra bo hoan vi dau tien
    int i;
    for (i = 0; i < n; i++)
    {
        arr[i] = i + 65;
        printf("%d", arr[i]);
    }
    // xu ly de in ra cac bo hoan vi tiep theo
    for (i = n - 1; i > 0; i--)
    {
        int j;
        // neu gap arr[i] > arr[i - 1]
        if (arr[i] > arr[i - 1])
        {

            // tim trong bo cuoi giam dan phan tu vua du lon hon mang[i - 1] sau do swap
            for (j = n - 1; j >= i; j--)
            {
                if (arr[j] > arr[i - 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[i - 1];
                    arr[i - 1] = temp;
                    break;
                }
            }
        }
        // dao nguoc bo cuoi
        for (j = n - 1; j > ((n - 1 + i) / 2); j--)
        {
            int temp = arr[i + n - 1 - j];
            arr[i + n - 1 - j] = arr[j];
            arr[j] = temp;
        }
        // in ra cac bo hoan vi moi
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d", arr[j]);
        }
        // i = n de khi thoat vong lap hien tai i-- thanh i = n - 1; va vong lap
        i = n;
    }
    getch();
    return 0;
}