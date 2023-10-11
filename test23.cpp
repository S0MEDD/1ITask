

#include "MyLib.h"

int main()
{
    vector <Person> Group;
    for (int j = 0; j < 2; j++) {
        string N, S;
        int W, n, e;
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
        Group.push_back(A);
        A.~Person();
        temp.clear();
    }
    for (auto& B : Group) B.printPerson();
    system("pause");

  
}
