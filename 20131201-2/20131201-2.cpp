// 20131201-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* 题目
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
10
*/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 10005
int main()
{
	map <int, int > m;
	int n;
	cin >> n;

	int midVal;
	for (int i = 0; i < n; i++)
	{
		cin >> midVal;
		m[midVal]++;
	}
	//output
	int maxAns = 0;
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		if (it->second > maxAns)
		{
			maxAns = it->second;
		}

	}
	//cout << maxAns << endl;
	vector <int> ans;
	for (map<int, int>::iterator it = m.begin() ; it!=m.end() ; it++)
	{
		if (it->first == maxAns)
		{
			ans.push_back( it->second);
		}
	}
	int out = ans[0];
	for (int i = 0; i < ans.size(); i++)
	{
		if (out < ans[i])
			out = ans[i];
	}
	cout << out;

	return 0;
}

