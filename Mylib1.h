#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <numeric>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::setw;
using std::left;
using std::right;
using std::fixed;
using std::setprecision;

int minimum(int a, int b);

class Person {
	string Name, Surname;
	vector <int> HW;
	int Exam;
	float Final;
public:
	Person();
	Person(string N, string S, vector <int> H, int E, float F);

	Person& operator=(const Person& P);
	Person(const Person& P);
	~Person();
	///setters
	inline void setName(string N) { Name = N; }
	///overloaded cin
	///overloaded cout
	/// final point calculation from average or median
	void printPerson();
};