#include <iostream>

using namespace std;

template<class T>
class Arithmetic{
private:
  T a;
  T b;

public:
  Arithmetic(T a, T b);
  T add();
  T sub();
};

    template<class T>
    Arithmetic<T>::Arithmetic(T a, T b){
      this->a=a;
      this->b=b;
    }

    template<class T>
    T Arithmetic<T>::add(){
      T c;
      c = a+b;
      return c;
    }

    template<class T>
    T Arithmetic<T>::sub(){
      T c;
      c = a - b;
      return c;
    }

int main(){
  Arithmetic<float> arF(5.1, 4.9);
  cout << "Arithmetic on floats (5.1, 4.9)" << endl;
  cout << "Add " << arF.add() << endl;
  cout << "Sub " << arF.sub() << endl;
  Arithmetic<int> arI(5, 4);
  cout << "Arithmetic on integers (5, 4)" << endl;
  cout << "Add " << arI.add() << endl;
  cout << "Sub " << arI.sub() << endl;
  
  return 0;
}
