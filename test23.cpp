

#include "MyLib.h"

int main()
{
    Person A;
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

    A.printPerson();
}
