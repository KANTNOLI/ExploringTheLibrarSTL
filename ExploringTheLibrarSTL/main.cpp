#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	list<int> myList = {12, 12, 12, 42, 12, 24, 12, 7};
	
	auto it = myList.begin();
	
	advance(it, 5);

	myList.assign(3, 122121);

	for (auto i = myList.begin(); i != myList.end(); i++)
	{
		cout << *i << endl;
	}


	return 0;
} 