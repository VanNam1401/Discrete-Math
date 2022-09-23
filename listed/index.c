#include <stdio.h>
#include <conio.h>
int main()
{
    // nhap vao n
    int n;
    printf("nhap vao n: ");
    scanf("%d", &n);
    printf("\n Cac bo hoan vi la: \n");
    // khoi tao mang gom n phan tu
    char mang[n];
    // gan gia tri cho cac phan tu cua mang va in ra bo hoan vi dau tien
    int i;
    for (i = 0; i < n; i++)
    {
        mang[i] = i + 65;
        printf("%d", mang[i]);
    }
    // xu ly de in ra cac bo hoan vi tiep theo
    for (i = n - 1; i > 0; i--)
    {
        int j;
        //neu gap mang[i] > mang[i - 1]
        if (mang[i] > mang[i - 1])
        {
            
            //tim trong bo cuoi giam dan phan tu vua du lon hon mang[i - 1] sau do swap
            for (j = n - 1; j >= i; j--)
            {
                int temp = mang[j];
                mang[j] = mang[i - 1];
                mang[i - 1] = temp;
                break;
            }
        }
        //dao nguoc bo cuoi
        for (j = n - 1; j > ((n - 1 + i)/2); j--) {
            int temp = mang[i + n - 1 - j];
            mang[i+n - 1-j] = mang[j];
            mang[j] = temp;
        }
        //in ra cac bo hoan vi moi
        printf("\n");
        for (j = 0; j < n; j++) { 
            printf("%d", mang[j]);
        }
        //i = n de khi thoat vong lap hien tai i-- thanh i = n - 1; va vong lap 
        i = n;
    }
    getch();
    return 0;
    
}