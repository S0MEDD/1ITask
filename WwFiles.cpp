#include "WwFiles.h"

void dataread(string ReadName) {
	std::stringstream output_buffer, output_buffer2;
	string MyString;
	vector<Person>Group;
	std::ifstream open_f(ReadName);
	std::getline(open_f, MyString);
	while (open_f)
	{
		if (!open_f.eof())
		{
			std::getline(open_f, MyString);
			std::stringstream my_buffer(MyString);
			Person Temp;
			string Sentences;
			my_buffer >> Sentences;
			Temp.setName(Sentences);
			my_buffer >> Sentences;
			Temp.setSurname(Sentences);
			vector <int> TempV;
			int t;
			while (my_buffer >> t) {
				if (t >= 0 && t <= 10) TempV.push_back(t);
				else cout << "Points inpute error";
			}
			if (TempV.empty()) std::cerr << "semester points dont exist!!!";
			else {

				Temp.setExam(TempV.back());
				TempV.pop_back();
				Temp.setHW(TempV);
				Temp.setFinal(0.4 * (std::accumulate(TempV.begin(), TempV.end(), 0.0) /
					TempV.size()) + 0.6 * Temp.getExam());
				Group.push_back(Temp);
				
			}
			TempV.clear();
			Temp.setHW(TempV);
			
		}
		else break;

	}
	 
	cout << "If You want rearange data by Names press - 1, Surnames - 2, final point -3:";
	int selection;
	cin.clear();
	cin >> selection;
	

	switch (selection) {
	case 1: sort(Group.begin(), Group.end(), lessName); break;
	case 2: sort(Group.begin(), Group.end(), lessSurname); break;
	default: sort(Group.begin(), Group.end());
	}

	sort(Group.begin(), Group.end()); 
		vector <Person> good, bad; 
		for (auto &a : Group)
			if (a.getFinal() >= 5.) good.push_back(a);
			else bad.push_back(a);
		cout << "\n" << good.size() << bad.size() << Group.size();

		std::ofstream output_fb("bad.txt");
		std::ofstream output_fg("passed.txt");
	
    for (auto& B : good) output_buffer << B;
	output_fg << output_buffer.str();
	output_fg.close();

	
	for (auto& B : bad)  output_buffer2 << B;
	output_fb << output_buffer2.str(); 
	output_fb.close();
}

void generateFiles() {
	vector <int> files{ 1000, 10000, 100000, 1000000, 10000000};
	for (auto a : files) {
		std::string temp =  std::to_string(a) + ".txt";
		std::ofstream output_f(temp);

		for (int i = 0; i < a; i++) {
			Person temp;
			output_f << temp.output_to_string();
			temp.~Person();
		}
		output_f.close();
		temp.clear();
	}
}

