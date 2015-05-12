
#include <vector>
#include <string>

using namespace std;

template <class E>
class ArraySet{

private:
	vector<E> vectorSet;

public:
	ArraySet(){vectorSet = new vector<E>();};
	bool add(E element);
	bool contains(E element);
	vector<E> toVector();
	string toString();
};
