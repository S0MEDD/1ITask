#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using std::cout;
using std::cin;
using std::string;
using std::vector;

int minimum(int a, int b);

class Person {
	string Name, Surname;
	vector <int> HW;
	int Exam;
	float Final;
public:
	Person() { 
		Name = ""; Surname = "";
			Exam = 0; Final = 0.0;
		HW.clear();
	
	};
	Person(string N, string S, vector <int> H, int E, float F) {
		Name = N;
		Surname = S;
		HW = H;
		Exam = E;
		Final = F;
	}
	Person& operator=(const Person& P);
	Person(const Person& P);
	~Person();
	///setters
	inline void setName(string N) { Name = N; }
	///overloaded cin
	///overloaded cout
	/// final point calculation from average or median
	void printPerson() {
		cout << Name << " : " << Surname << " | " << Final << endl;
	}
};

