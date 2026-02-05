/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

void main()
{
    int n;
    printf("Nhap do dai mang so: ");
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap gia tri phan tu thu %d: \n", i);
        scanf("%d", &nums[i]);
    }

    int tong = 0, count = 0;
    float tbc;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 3 == 0)
        {
            tong += nums[i];
            count++;
        }
        i++;
    }
    if (count == 0)
    {
        printf("Khong co ket qua tbc\n");
    }
    else
    {
        tbc = (float)tong / count;
        printf("Ket qua: %.2f", tbc);
    }
}