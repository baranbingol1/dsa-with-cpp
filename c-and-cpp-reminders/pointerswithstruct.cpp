#include <iostream>

struct Rectangle {
  int height;
  int width;
};

using namespace std;

int main(){

  Rectangle r = {3,4};
  cout << "Acces via attribute" << endl;
  cout << r.height << endl << r.width << endl;

  Rectangle *p = &r;
  cout << "Acces via pointer" << endl;
  cout << p->height << endl << p->width << endl;

  // c language way
  p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
  cout << "Setting attributes of manually located Rectangle (c language)" << endl;
  p->height = 5; p->width = 6;
  cout << p->height << endl << p->width << endl;

  // c++ way
  p=new Rectangle;
  cout << "Setting attributes of manually located Rectangle (c++ language)" << endl;
  p->height = 5; p->width = 6;
  cout << p->height << endl << p->width << endl;

  return 0;
}