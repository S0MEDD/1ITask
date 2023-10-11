#include "Mylib.h"

int minimum(int a, int b) {
	int temp = (a < b) ? a : b;
	return temp;
}

Person::Person(){
	Name = ""; Surname = "";
	Exam = 0; Final = 0.0;
	HW.clear();
};
Person::Person(string N, string S, vector <int> H,
	int E, float F) {
	Name = N;
	Surname = S;
	HW = H;
	Exam = E;
	Final = F;
}
Person::Person(const Person& P) {
	Name = P.Name;
	Surname = P.Surname;
	HW = P.HW;
	Exam = P.Exam;
	Final = P.Final;
};
Person& Person::operator=(const Person& P) {
if (this == &P) return *this;
Name = P.Name;
Surname = P.Surname;
HW = P.HW;
Exam = P.Exam;
Final = P.Final;
 return *this;
}
Person::~Person() {
	Name.clear();
	Surname.clear();
	HW.clear();
	Exam = 0;
	Final = 0.0;
	
}
