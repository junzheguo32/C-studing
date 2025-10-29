#include <stdio.h>
#include <stdlib.h>

int countcishu(int arr[], int l, int r, int x) {
    if (l == r) {
        if (arr[l] == x) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        int mid = (l + r) / 2;
        int lc = countcishu(arr, l, mid, x);
        int rc = countcishu(arr, mid + 1, r, x);
        return lc + rc;
    }
}

// 测试函数
int main() {
    int arr[] = { 2, 3, 5, 2, 8, 2, 1, 2, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    int count = count_occurrences(arr, 0, n - 1, x);
    printf("数字 %d 在数组中出现了 %d 次\n", x, count);

    return 0;
}