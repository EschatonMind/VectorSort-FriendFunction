#include"Test.h"

bool comp(const Test& a, Test& b) {
	return a.name < b.name;
}

int main() {

	vector<Test> tests;

	tests.push_back(Test(22, "A"));
	tests.push_back(Test(22, "B"));
	tests.push_back(Test(22, "C"));
	
	sort(tests.begin(), tests.end(), comp);

	for (int i = 0; i < tests.size(); i++) {
		tests[i].print();
	}

	return 0;
}