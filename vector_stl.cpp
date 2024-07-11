#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vectors are dynamic arrays they resize automatically
    vector<int> first; // empty container construction

    vector<int> second(5, 1); // [1,1,1,1,1] // fill construction

    int zeros[] = {0, 0, 0, 0};
    vector<int> third(zeros, zeros+4); // range construction

    vector<int> fourth(third); // copy construction

    int zero = fourth.at(0);
    zero = fourth[1];

    // some methods
    cout << fourth.at(0) << endl;
    cout << fourth[1] << endl;
    cout << fourth.size() << endl;
    cout << fourth.capacity() << endl;
    cout << fourth.max_size() << endl; // max size that vector can reach

    fourth.push_back(20);
    cout << fourth.size() << endl;

    fourth.pop_back();
    cout << fourth.size() << endl;

    fourth.erase(fourth.begin() + 3); // erase 4th element
    cout << fourth.size() << endl;

    fourth.clear(); // clear entire vector
    cout << fourth.size() << endl;

    return 0;
}
/* Output :
 *
* 0
0
4
4
2305843009213693951
5
4
3
0
*/
