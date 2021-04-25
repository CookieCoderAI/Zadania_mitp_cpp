#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void printVec(vector<int> vec) {
    cout << endl;
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << "   ";
    }
    cout << endl;
}
/*----------------------------------zadanie 2.4----------------------------------*/
void queueLimit(queue<int> que) {
    while (que.size() > 6) {
        cout << "Kolejka pelna, usuwam element " << que.size() << endl;
        que.pop();
    }
}
/*-------------------------------------------------------------------------------*/

int main()
{
    /*-----------------------------------ZADANIE 1-----------------------------------*/
    /*----------------------------------zadanie 1.2----------------------------------*/
    vector<int> vec;

    cout << "Wekotr: " << endl;

    for (size_t i = 0; i < 10; i++)
        vec.push_back(i);
    printVec(vec);

    /*----------------------------------zadanie 1.3----------------------------------*/
    cout << "Wielkosc wektora: " << vec.size() << endl;

    /*----------------------------------zadanie 1.4----------------------------------*/
    vec.erase(vec.begin() + 3, vec.begin() + 7);
    printVec(vec);
   
    /*----------------------------------zadanie 1.5----------------------------------*/
    vec.erase(vec.end()-1);
    printVec(vec);

    /*----------------------------------zadanie 1.6----------------------------------*/
    vec.insert(vec.begin(), 102);
    printVec(vec);

    /*----------------------------------zadanie 1.7----------------------------------*/
    vec.push_back(110011);
    printVec(vec);
    /*-------------------------------KONIEC ZADANIA 1--------------------------------*/


    /*-----------------------------------ZADANIE 2-----------------------------------*/
    /*----------------------------------zadanie 2.1----------------------------------*/
    queue<int> que;

    cout << "Kolejka: " << endl;

    for (int i = 0; i < 12; i++) {
        que.push(i);
        cout << i << "   ";
    }
    cout << endl;

    /*----------------------------------zadanie 2.2----------------------------------*/
    cout << "Wielkosc kolejki: " << que.size() << endl;

    /*----------------------------------zadanie 2.3----------------------------------*/
    for (int i = 0; i < 5; i++)
        que.pop();

    int it = que.size();

    for (int i = 0; i < it; i++) {
        cout << que.front() << "   ";
        que.pop();
    }
    cout << endl;

    /*----------------------------------zadanie 2.5----------------------------------*/
    for (int i = 0; i < 4; i++)
        que.push(i);
    queueLimit(que);

    /*----------------------------------zadanie 2.6----------------------------------*/
    it = que.size();

    cout << "Wielkosc kolejki: " << it << endl;

    for (int i = 0; i < it; i++) {
        cout << que.front() << "   ";
        que.pop();
    }
    cout << endl;

    for (size_t i = 0; i < 4; i++)
        que.push(i);
    queueLimit(que);

    /*----------------------------------zadanie 2.7----------------------------------*/
    for (size_t i = 0; i < 2; i++)
        que.pop();

    /*----------------------------------zadanie 2.8----------------------------------*/
    it = que.size();

    cout << "Wielkosc kolejki: " << it << endl;

    for (int i = 0; i < it; i++) {
        cout << que.front() << "   ";
        que.pop();
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
        que.push(i);
    queueLimit(que);
    /*----------------------------------zadanie 2.9----------------------------------*/
    for (int i = 0; i < 7; i++)
        que.push(i);
    queueLimit(que);


    /*----------------------------------zadanie 2.10----------------------------------*/
    it = que.size();

    cout << "Wielkosc kolejki: " << it << endl;

    for (int i = 0; i < it; i++) {
        cout << que.front() << "   ";
        que.pop();
    }
    cout << endl;
    /*-------------------------------KONIEC ZADANIA 1--------------------------------*/

}
