#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
    // 
    //vector<int> container;    //(1)
    //list<int> container       //(2)
    //set<int> container;       //(3)
    map<int, char> container;   //(4)

    for (int i = 0; i < 10; ++i)
        //container.push_back(i); // vector, list - (1),(@)
        //container.insert(i); // set - (3)
        container.insert(make_pair(i, char(i + 65))); // map - (4)

    // vector<int>::iterator 도 있다.
    vector<int>::const_iterator itr;
    
    //// 옛날 코드 while문방법
    //itr = container.begin();
    //while (itr != container.end())
    //{
    //    cout << *itr << " ";

    //    ++itr;
    //}
    //cout << endl;

    //// 요즘코드
    //for (auto& e : container)
    //    cout << e << " ";
    //cout << endl;

    // for문 방법
    for (auto itr = container.begin(); itr != container.end(); ++itr)
    {
        //cout << *itr << " ";                              //(1),(2),(3)
        cout << itr->first << " " << itr->second << endl;   // (4)
    }
    cout << endl;

    return 0;
}