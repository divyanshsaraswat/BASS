#include <iostream>
using namespace std;

template <class T>
class Repository
{
public:
    void add(T x);
    void remove(string id);
    void update(string id, T y);
    auto find(string id);
    void listAll(T x);
};