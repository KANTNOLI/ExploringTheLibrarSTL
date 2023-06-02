#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");


	vector<int> myVector = { 1, 23 , 32 , 32 ,23 };
	vector<int>::iterator i = myVector.begin();

	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;

	}

	cout << "\n Insert\n";
	vector<int>::iterator it = myVector.begin(); 
	advance(it, 4);
	myVector.insert(it, 999);

	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;

	}


	cout << "\n erese\n";
	vector<int>::iterator it2 = myVector.begin();
	//advance(it2, 4); 
	myVector.erase(it2, it2 + 3);  

	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++) 
	{ 
		cout << *i << endl; 

	}

	return 0;
}