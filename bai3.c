/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

void main()
{
    int nums[10] = {100, 5, 12, 42, 23, 10, 6, 12, 98, 97};
    int j = 1;
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        if (nums[i] < nums[j])
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        j++;
    }

    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        printf("%d\n", nums[i]);
    }
}