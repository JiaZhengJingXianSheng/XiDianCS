// 2019real03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*消除游戏
* n行m列 行或列有三个及以上消除 对应输出0

输入
4 5
2 2 3 1 2
3 4 5 1 4
2 3 2 1 3
2 2 2 4 4

例2
4 5 
2 2 3 1 2
3 1 1 1 1
2 3 2 1 3
2 2 3 3 3
*/
#include <iostream>
using namespace std;
int arr[200][200];
bool flag[200][200];
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            flag[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //lie
            if (i != 0 and i != n-1 and arr[i][j] == arr[i - 1][j] and arr[i][j] == arr[i + 1][j])
            {
                flag[i][j] = true;
                flag[i-1][j] = true;
                flag[i+1][j] = true;
            }
            //hang
            if (j != 0 and j != m - 1 and arr[i][j] == arr[i][j-1] and arr[i][j] == arr[i][j+1])
            {
                flag[i][j] = true;
                flag[i][j-1] = true;
                flag[i][j+1] = true;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (flag[i][j] == true)
            {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}

