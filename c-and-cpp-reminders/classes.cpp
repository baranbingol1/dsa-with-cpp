#include <iostream>

using namespace std;

// in struct everything is public
// in classes everything is private by default

class Rectangle{
private:
  int length;
  int breadth;
public:
  // default constructor
  Rectangle(){
    length = 0;
    breadth = 0;
  }
  // constructor when parameters are given
  Rectangle(int l, int b){
    length = l;
    breadth = b;
  }

  int area(){
    return length*breadth;
  }
  
  int perimeter(){
    return (length+breadth)*2;
  }
  
  // getters and setters
  
  void setLength(int l){
    length = l;
  }
  
  void setBreadth(int b){
    breadth = b;
  }
  
  int getLength(){
    return length;
  }
  
  int getBreadth(){
    return breadth;
  }
  // destructor
  ~Rectangle(){
    cout <<"Destructor invoked";
  }


};

int main() {
  
  Rectangle r(3,4);

  cout << "Area " << r.area() << endl;
  cout << "Perimeter " << r.perimeter() << endl;
  
  return 0;
  
}