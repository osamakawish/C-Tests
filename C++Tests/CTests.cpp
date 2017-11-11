// CTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <stack>
#include <string> // To create maps with strings.
#include <queue>
#include <exception>
#include <random>
#include <time.h>

using namespace std;

// A function template.
template <class T>
T sum(T x, T y) {
	return x + y;
}

int main()
{
	// RANDOM
	srand(time(NULL)); // initialize random seed.
	for (int i = 0; i < 8; i++)
	{
		printf("Random number less than 100: %d\n", rand() % 100);
	}

	cout << endl << endl << endl;
	
	// SETS

	set<int> S = { -4, 2, 3, 9 };
	unordered_set<int> uS = { -4, 2, 3, 9 };

	int x = 4;
	cout << "Searching for " << x << " in uS... " << endl; 
	unordered_set<int>::iterator uSi = uS.find(x);
	if (uSi != uS.end()) {
		cout << *uSi << endl;
	}
	else {
		cout << "No " << x << " found." << endl;
	}
	cout << endl;

	cout << "S.size() = " << S.size() << endl;
	cout << "Printing out set: " << endl;
	for (int i : S) {
		cout << i << " ";
	}

	cout << "Inserting a 2..." << endl; S.insert(2);
	for (int i : S) {
		cout << i << " ";
	}
	
	cout << "Finding a 5... " << endl;
	set<int>::iterator siI5 = S.find(5);
	if (siI5 != S.end()) {
		cout << *siI5 << endl;
	}
	else {
		cout << "No 5 found" << endl;
	}

	cout << "and a 2... " << endl;
	set<int>::iterator siI2 = S.find(2);
	cout << *siI2 << endl;

	cout << "uS.size() = " << uS.size() << endl;

	cout << endl << endl << endl;


	// IOSTREAM
	//string input;
	//cout << "Prompt. cin >> "; cin >> input;
	//cout << endl << "The first word of your input is: " << input << endl;
	//
	////char buf[128]; // Buffer stores data while computing.
	////cout << "Prompt. cin.getline(buf, sizeof(buf)) = "; cin.getline(buf, sizeof(buf));
	////cout << endl << "Your entire input was: " << buf << endl;

	//cout << endl << endl << endl;

	// MAPS
	map<string, string> caps = { {"a", "A"}, {"b", "B"}, {"c", "C"}, {"d", "D"} };

	cout << "caps[\"a\"]: " << caps["a"] << endl;
	cout << "caps.at(\"a\"): " << caps.at("a") << endl;
	cout << endl;

	cout << endl << endl << endl;
	
	// VECTORS
	vector<string> U = { "Hello", "You", "Piece ", "OF", "cake", "." };
	vector<int> V = { 1, 2, 3, 4, 5 };

	cout << U[2] << endl;

	cout << "V.front(): " << V.front() << endl;
	cout << "V.back(): " << V.back() << endl;
	cout << "V.at(2): " << V.at(2) << endl;
	cout << "V[2]: " << V[2] << endl;
	cout << "V.size(): " << V.size() << endl;

	cout << endl;
	cout << "Pushing 5 to back." << endl;  V.push_back(5);
	cout << V.back() << endl;
	cout << "Removing 3 from V (which is at index 2)." << endl; V.erase(V.begin() + 2);
	cout << "V[2] is now: " << V[2] << endl;

	// cin >> sayHi; // Only takes first word of input.
	// cin.getline(buffer, sizeof(buffer)); // Takes entire line of input.

	cout << endl << endl << endl;

	// Iterator
	auto Vbegin = V.begin(); // auto declaration
	vector<int>::iterator Vend = V.end(); // full declaration
	for (auto v = Vbegin; v < Vend; ++v)
	{
		cout << *v << " ";
	}
	cout << endl << endl << endl;

	

	// LISTS
	//list<int> L = { 1, 2, 3, 4, 6, 5, 9, 8, 7 };
	

    return 0;
}

