// 20131203.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
* 在横轴上放了n个相邻的矩形，每个矩形的宽度是1，而第i（1 ≤ i ≤ n）个矩形的高度是hi。
这n个矩形构成了一个直方图。例如，下图中六个矩形的高度就分别是3, 1, 6, 5, 2, 3。

请找出能放在给定直方图里面积最大的矩形，它的边要与坐标轴平行。对于上面给出的例子，
最大矩形如下图所示的阴影部分，面积是10。

输入
第一行包含一个整数n，即矩形的数量(1 ≤ n ≤ 1000)。
第二行包含n 个整数h1, h2, … , hn，相邻的数之间由空格分隔。(1 ≤ hi ≤ 10000)。hi是第i个矩形的高度。

输出
输出一行，包含一个整数，即给定直方图内的最大矩形的面积。

输入样例
6
3 1 6 5 2 3

输出样例
10
*/
#include <iostream>
#include <vector>
using namespace std;
#define NMAX 1000
int high[NMAX];
vector <int> maxAns;
int ans;
int main()
{
    int max ;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> high[i];
    }

    //遍历
    
    for ( int i = 0; i < n; i++)
    {
        int hiMin = high[i];
        for (int j = i; j < n; j++)
        {
            hiMin = min(hiMin, high[j]);
            maxAns.push_back(hiMin* (j - i + 1));
        }
    }
    ans = maxAns[0];
    for (int i = 0; i < maxAns.size(); i++)
    {
        if (ans < maxAns[i])
            ans = maxAns[i];
    }
    cout << ans;
    return 0;
}

