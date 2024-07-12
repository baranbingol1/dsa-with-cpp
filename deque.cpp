#include <iostream>
#include <deque>

using namespace std;

int main() {
    // same constructions in vectors can be applied to deque also
    deque<int> dq (4, 100);

    dq.push_back(50);

    dq.pop_back();

    dq.push_front(50);

    deque<int> dq2(10);

    for(int i = 0 ; i < 10 ; i++) {
        dq2[i] = i*i;
    }

    cout << dq2.size() << endl;

    for(auto x : dq2) {
        cout << x << " ";
    }
    cout << endl;

    dq2.push_back(100);

    cout << dq2.size() << endl;

    return 0;
}
/* Output :

10
0 1 4 9 16 25 36 49 64 81
11

*/
