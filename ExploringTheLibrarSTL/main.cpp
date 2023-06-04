#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	list<int> myList = {12, 24, 7};
	myList.pop_front();
	myList.pop_back();

	auto it = myList.begin();
	myList.sort();
	for (auto i = myList.begin(); i != myList.end(); i++)
	{
		cout << *i << endl;
	}


	return 0;
} 