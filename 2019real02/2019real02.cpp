// 2019real02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* 给定N个整数 计算每个整数各位数字和 按各位数字和由大到小输出 若和相同 先输出值小的
*/
#include <iostream>
#include <algorithm>
using namespace std;
typedef struct stct
{
    int val;
    int ans;
}s;
s arr[1005];

bool cmp(s a, s b)
{
    if (a.ans == b.ans)
        return a.val < b.val;
    return a.ans > b.ans;
}
int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].val;
        arr[i].ans = arr[i].val % 10 + (arr[i].val / 10) % 10 + (arr[i].val / 100) % 10 +(arr[i].val / 1000)%10
            +(arr[i].val / 10000)%10;
    }
    sort(arr, arr+n-1, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].val << " " << arr[i].ans << endl;
    }
    return 0;
}

