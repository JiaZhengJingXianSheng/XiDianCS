// 20131201.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
题目
给定n个正整数，找出它们中出现次数最多的数。如果这样的数有多个，请输出其中最小的一个。

输入
输入的第一行只有一个正整数n(1 ≤ n ≤ 1000)，表示数字的个数。
输入的第二行有n个整数s1, s2, …, sn (1 ≤ si ≤ 10000, 1 ≤ i ≤ n)。相邻的数用空格分隔。

输出
输出这n个次数中出现次数最多的数。如果这样的数有多个，输出其中最小的一个。

输入样例
6
10 1 10 20 30 20

输出样例
10*/
#include <iostream>
#include <algorithm>
#define MAX 10005
int val[MAX];
using namespace std;

int main()
{   
    int n , a;
    cin >> n;
    
    for (int i = 0; i < MAX; i++)
    {
        val[i] = 0;
    }

    int i = 0;
    while (n >= 1 and n <= 10000 and i < n)
    {
        cin >> a;
        val[a]++;
        i++;
    }
    int ansMax = 0;
    int ans;
    for (int i = 0; i < MAX; i++)
    {
        if (ansMax < val[i])
            ansMax = val[i];
    }
    for (int i = 0; i < MAX; i++)
    {
        if (val[i] == ansMax) {
            ans = i;
            break;
        }

    }
    cout << ans;
    return 0;
}

