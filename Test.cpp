#include "Test.h"
Test::Test(){}
Test::Test(int id, string name) {
	this->name = name;
	this->id = id;
}
void Test::print() {

	cout << id << endl << name << endl;
}
