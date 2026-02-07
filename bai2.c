/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// HÀM PHÁT SINH NGẪU NHIÊN CÁC PHẦN TỬ CỦA MẢNG
void randomArray(int arr[], int size, int min, int max)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

// HÀM IN MẢNG
void printArray(int arr[], int size)
{
    printf("Các phần tử của mảng là:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findMaxNum(int arr[], int size, int *max)
{
    if (size > 0)
    {
        *max = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > *max)
            {
                *max = arr[i];
            };
        };
    }
    else
    {
        printf("Mang rong");
    }
}

void findMinNum(int arr[], int size, int *min)
{
    if (size > 0)
    {
        *min = arr[0];
        for (int i = 0; i < size; i++)
        {

            if (arr[i] < *min)
            {
                *min = arr[i];
            }
        };
    }
    else
    {
        printf("Mang rong");
    }
}

void main()
{
    int n;

    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];

    randomArray(arr, n, 1, 100);
    printArray(arr, n);
    // int nums[10] = {100, 5, 12, 42, 23, 10, 6, 12, 98, 97};
    int max = 0, min = arr[0];
    findMaxNum(arr, n, &max);
    findMinNum(arr, n, &min);
    printf("So lon nhat la: %d\n", max);
    printf("So nho nhat la: %d\n", min);
}