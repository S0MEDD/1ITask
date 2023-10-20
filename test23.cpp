#include "Mylib1.h"

int main()
{
    cout << "Use automatic user generation (1) or turn on manual input of all data";
    int select1; cin >> select1;
    switch (select1) {
        case 1: {
        cout << "How many person belongs to the Group?";
        int PN; cin >> PN;
        vector<Person> Group(PN);
        for (auto& B : Group) cout << B;
        break;
    }
    
        default: {
            vector<Person> Group;
            for (int j = 0; j < 3; j++) {
                Person temp;
                cin >> temp;
                /*
                string N,S
                int W, n, E;
                vector <int> temp;
                float Fin;
                cout << "Please input Person name and surname";
                cin >> N >> S;
                cout << "Please input how many works has Person ";
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    cout << "Please input work " << i + 1 << "evaluation point: ";
                    cin >> W;
                    temp.push_back(W);
                }
                cout << "Please input final exam result: ";
                cin >> E;
                Fin = 0.4 * (std::accumulate(temp.begin(), temp.end(), 0.0) / temp.size()) + 0.6 * E;
                Person A(N, S, temp, E, Fin);
                */
                Group.push_back(temp);
                temp.~Person();
                //temp.clear();
            
        }
            for (auto& B : Group) cout <<B;
        }
               }

    system("pause");  
}
