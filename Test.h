#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Test
{

private:

	int id;
	string name;

public:

	Test();
	Test(int id, string name);
	void print();
	friend bool comp(const Test& a, Test& b);
};

