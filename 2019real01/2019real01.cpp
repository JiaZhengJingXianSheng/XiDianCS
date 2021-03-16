// 2019real01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* 给定整数数列 数列中连续相同的最长整数序列算成一段 问数列中共有多少段
* 第一行输入n 1-1000
* 第二行数 0-1000
* 输入
* 8
* 8 8 8 0 12 12 8 0
* 输出
* 5
* 
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    int count = 1;
    int fr, re;
    cin >> n;
    cin >> fr;

    for (int i = 1; i < n; i++)
    {
        cin >> re;
        if (re != fr)
        {
            count++;
        }
        fr = re;
    }
    cout << count;
    return 0;
}

